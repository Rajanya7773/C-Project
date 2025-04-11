#include <stdio.h>
#include <string.h>

#define MAX_OVERS 5  // Set overs limit (change as needed)
#define MAX_WICKETS 10

typedef struct {
    char name[30];
    int runs;
    int balls;
} Batsman;

typedef struct {
    char name[30];
    int wickets;
    int runsGiven;
} Bowler;

void displayScore(Batsman batsmen[], int totalRuns, int totalWickets, Bowler bowler, int overs, int balls) {
    printf("\n----------------------------------\n");
    printf("       Current Match Score       \n");
    printf("----------------------------------\n");
    printf("Batsman: %s - %d (%d balls)\n", batsmen[0].name, batsmen[0].runs, batsmen[0].balls);
    printf("Partner: %s - %d (%d balls)\n", batsmen[1].name, batsmen[1].runs, batsmen[1].balls);
    printf("Total Score: %d/%d\n", totalRuns, totalWickets);
    printf("Bowler: %s | Wickets: %d | Runs Given: %d\n", bowler.name, bowler.wickets, bowler.runsGiven);
    printf("Overs: %d.%d | Overs Remaining: %d.%d\n", overs, balls, MAX_OVERS - overs, 6 - balls);
    printf("----------------------------------\n");
}

int main() {
    Batsman batsmen[2];
    Bowler bowler;
    int totalRuns = 0, totalWickets = 0, overs = 0, balls = 0, choice;
    
    printf("Enter Striker's Name: ");
    scanf("%s", batsmen[0].name);
    printf("Enter Non-striker's Name: ");
    scanf("%s", batsmen[1].name);
    printf("Enter Bowler's Name: ");
    scanf("%s", bowler.name);
    
    batsmen[0].runs = batsmen[1].runs = 0;
    batsmen[0].balls = batsmen[1].balls = 0;
    bowler.wickets = bowler.runsGiven = 0;
    
    printf("\nMatch Starts Now!\n");
    
    while (totalWickets < MAX_WICKETS && overs < MAX_OVERS) {
        printf("\nEnter runs scored (0,1,2,3,4,6) or -1 for Wicket: ");
        scanf("%d", &choice);

        if (choice == -1) {
            printf("%s is OUT!\n", batsmen[0].name);
            totalWickets++;
            bowler.wickets++;
            
            if (totalWickets == MAX_WICKETS) {
                printf("\nAll wickets down! Innings Over.\n");
                break;
            }

            // New batsman comes in
            printf("Enter new batsman's name: ");
            scanf("%s", batsmen[0].name);
            batsmen[0].runs = 0;
            batsmen[0].balls = 0;
        } else if (choice == 0 || choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 6) {
            batsmen[0].runs += choice;
            batsmen[0].balls++;
            totalRuns += choice;
            bowler.runsGiven += choice;

            // Strike rotates on odd runs
            if (choice % 2 != 0) {
                Batsman temp = batsmen[0];
                batsmen[0] = batsmen[1];
                batsmen[1] = temp;
            }
        } else {
            printf("Invalid input! Enter valid runs or -1 for wicket.\n");
            continue;
        }

        balls++;
        if (balls == 6) {
            overs++;
            balls = 0;

            // Rotate strike at end of over
            Batsman temp = batsmen[0];
            batsmen[0] = batsmen[1];
            batsmen[1] = temp;

            // Change bowler after every over
            printf("Over completed! Enter new Bowler's Name: ");
            scanf("%s", bowler.name);
            bowler.wickets = 0;
            bowler.runsGiven = 0;
        }

        displayScore(batsmen, totalRuns, totalWickets, bowler, overs, balls);
    }

    printf("\nFinal Score: %d/%d in %d overs.\n", totalRuns, totalWickets, overs);
    return 0;
}

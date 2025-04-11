🏏 Cricket Match Score Simulator
A C program to simulate a live cricket match where you enter ball-by-ball outcomes, and the system automatically manages the scorecard, strike rotation, over changes, bowler stats, and match progression — just like a real T20 match!

📋 Table of Contents

1.About the Project

2.Features

3.How It Works

4.Program Flow

5.Requirements

6.How to Run

7.Sample Output

8.Future Improvements

📖 About the Project
This project creates a basic yet realistic cricket match simulation for 5 overs or until 10 wickets fall.
It tracks batsmen scores, bowler performance, total team score, and updates the scoreboard live after every ball.

You manually input the result of each ball (runs scored or wicket) and the system takes care of all the rules of cricket behind the scenes.

It’s a fun way to learn:

C Programming (Structures, Loops, Conditionals, Functions)

How cricket match rules work

Managing live updates dynamically

✨ Features
✅ Tracks two current batsmen: Striker and Non-Striker
✅ Handles runs (0,1,2,3,4,6) and wickets (-1) input
✅ Strike changes automatically based on runs and over completions
✅ After each over, asks for a new bowler
✅ Keeps track of bowler’s runs conceded and wickets taken
✅ Displays a live scoreboard after every ball
✅ Ends match after 5 overs or 10 wickets
✅ Provides a neat Final Score Summary at the end

⚙️ How It Works (Step-by-Step)
1. 🏏 Start of Match
You enter:

>>Striker’s name

>>Non-striker’s name

>>Bowler’s name

All player stats (runs, balls faced, wickets, runs conceded) are initialized to zero.

2. 🎯 Ball-by-Ball Play
For each ball:

Input runs scored (0,1,2,3,4,6) or -1 if it's a wicket.

Based on input:

If runs are scored:

Runs are added to striker’s stats and team’s total.

Bowler’s runs conceded are updated.

If runs are odd (1 or 3), strike changes.

If a wicket falls (-1):

Current striker is out.

Team's wickets increase.

Bowler's wickets increase.

New batsman’s name is entered to replace the striker.

3. 🏁 Over Management
After 6 balls:

Over counter increases.

Balls reset to zero.

Strike is automatically changed.

Prompt appears to enter a new bowler's name.

New bowler stats start from zero.

4. 🛑 Match End Conditions
The match ends immediately if:

10 wickets fall, or

5 overs are completed.

Final match summary is printed.

🔄 Program Flow
plaintext
Copy
Edit
Start ➔
Input Batsmen and Bowler Names ➔
Loop per ball:
    ➔ Input Ball Result (Runs or Wicket)
    ➔ Update Stats (Runs, Balls, Bowler)
    ➔ Manage Strike Change (if needed)
    ➔ Check Over Completion (every 6 balls)
        ➔ Rotate Strike + New Bowler
    ➔ Display Live Scoreboard
    ➔ Check Match End (5 overs or 10 wickets)
End ➔ Final Score Summary
🖥️ Requirements
C Compiler (like GCC)

Basic knowledge of running C programs

🚀 How to Run
Copy the code into a file named cricket_simulator.c.

Open a terminal or command prompt.

Compile the code:

bash
Copy
Edit
gcc cricket_simulator.c -o cricket_simulator
Run the program:

bash
Copy
Edit
./cricket_simulator
Follow the on-screen prompts to simulate the match!

📈 Sample Output
plaintext
Copy
Edit
Enter Striker's Name: Rohit
Enter Non-striker's Name: Kohli
Enter Bowler's Name: Starc

Match Starts Now!

Enter runs scored (0,1,2,3,4,6) or -1 for Wicket: 1

----------------------------------
       Current Match Score       
----------------------------------
Batsman: Kohli - 0 (0 balls)
Partner: Rohit - 1 (1 balls)
Total Score: 1/0
Bowler: Starc | Wickets: 0 | Runs Given: 1
Overs: 0.1 | Overs Remaining: 4.5
----------------------------------

... [continues until match end] ...
📚 Future Improvements (Ideas 💡)
Track individual batsmen dismissals (e.g., Caught, Bowled).

Record partnerships.

Allow multiple overs per bowler (with bowling limits).

Save match scorecard to a text file.

Create a "full match replay" option.

Make a 2-team match (batting and bowling turns).

🌟 Final Notes
This project is a simple, beginner-friendly cricket match simulator, perfect for understanding game logic programming in C!
It combines sports with programming and can be extended into a much bigger cricket management game.

Enjoy scoring! 🎯🏏


🏏 Mini Cricket Scoreboard Simulation (C Language)
📜 About
This C program simulates a simple cricket match scoreboard for a limited-overs format.
It tracks the performance of two active batsmen and a bowler, updates the match situation ball-by-ball, and displays the current score after every delivery.
You can input runs scored or wickets, rotate strike based on odd runs or overs, and even change bowlers after each over!

🎯 Features
Track batsman runs, balls faced, bowler stats (wickets, runs given).

Strike rotation on odd runs and at the end of overs.

Dynamic bowler changes after each over.

Match ends automatically after reaching:

Maximum Wickets (10), or

Maximum Overs (5, or as defined).

Real-time current scorecard updates.

Simple and easy-to-use input system.

⚙️ How it Works
Program asks for:

Striker's name

Non-striker's name

Bowler's name

Match starts, and you can:

Enter runs scored per ball (0,1,2,3,4,6).

Enter -1 if a wicket falls.

After every ball:

Score updates and strike changes accordingly.

After every over:

New bowler’s name is requested.

Strike rotates.

Match finishes when either:

10 wickets fall

5 overs are bowled

🛠️ How to Compile and Run
bash
Copy
Edit
gcc cricket_scoreboard.c -o cricket_scoreboard
./cricket_scoreboard
Or if using Windows:

bash
Copy
Edit
gcc cricket_scoreboard.c -o cricket_scoreboard.exe
cricket_scoreboard.exe
📈 Sample Gameplay
yaml
Copy
Edit
Enter Striker's Name: Virat
Enter Non-striker's Name: Rohit
Enter Bowler's Name: Anderson

Match Starts Now!

Enter runs scored (0,1,2,3,4,6) or -1 for Wicket: 4

----------------------------------
       Current Match Score       
----------------------------------
Batsman: Virat - 4 (1 balls)
Partner: Rohit - 0 (0 balls)
Total Score: 4/0
Bowler: Anderson | Wickets: 0 | Runs Given: 4
Overs: 0.1 | Overs Remaining: 4.5
----------------------------------

...
📌 Important Points
Only valid inputs: 0,1,2,3,4,6,-1

Enter -1 to simulate a batsman getting out.

After an over ends (6 balls), you must input the new bowler’s name.

Program assumes basic T20 style rules for strike changes and over management.

🏗️ Future Improvements (Optional Ideas)
Maintain cumulative stats for all bowlers.

Display a full batting scoreboard at the end.

Calculate and display Run Rate and Required Run Rate (for chasing games).

Introduce extras (like wides and no-balls).

Allow custom number of overs and innings.

👨‍💻 Author
Developed by [] ✨
Feel free to modify or expand the code as per your project or learning needs!

Would you also like a small badge version or markdown table version of the README if you want it even cooler? 😎
(Like GitHub badges for "Language: C" | "Project Type: Simulation" | etc.)
Just say the word! 🚀

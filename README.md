A text-based, interactive C++ simulation of a cricket match titled CRIC-IN. This game allows users to manage two teams, select players from a pool, perform a toss, and simulate a two-innings match with randomized scoring and out-comes.

🕹️ Game Rules

Team Formation: Users must form two teams (Team-A and Team-B).


Player Selection: Select 4 players per team from a pool of 11 available players.


The Toss: The toss winner chooses to either bat or bowl first.


Match Format: Each innings consists of 6 balls (1 over).

🚀 Features

Interactive Player Selection: Prevents selecting the same player twice and validates input indices.


Randomized Simulation: Uses rand() to simulate runs scored (0-6) and wickets (out on a 0).


Real-time Scorecards: Displays batting and bowling statistics (runs, balls played, balls bowled, and wickets) after every ball or wicket.


Match Summary: Provides a comprehensive breakdown of player performances for both teams at the end of the game.


Input Validation: Includes a dedicated utility to ensure only valid integers are accepted during team creation and choices.

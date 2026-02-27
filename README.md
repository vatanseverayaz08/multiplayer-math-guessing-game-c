# Two Player Number Guessing Game (Beginner C Project)

## About This Project
This is a beginner-level C programming project.  
I created this game to practice:

- Loops
- If-else conditions
- Random number generation
- User input handling
- Basic game logic

The game runs in the console and is played by two players.

---

## How The Game Works
- Each player gets their own random number (between 1 and 100).  
- Before making a guess, the player must solve a multiplication question.  
- If the math answer is correct → the player can guess.  
- If the answer is wrong → the player loses that turn.  
- The first player to guess their number wins.  
- Players can type `-1` to quit the game.

---

## Skills Practiced
While building this project, I practiced:

- How to use `rand()` and `srand()`  
- How to build a turn-based system using `while(1)`  
- How to count attempts using variables  
- How to validate user input  
- How to structure a simple game in C

---

## How to Compile and Run

**Compile using GCC:**
gcc multiplayer_math_guessing_game_c.c -o game 

Run the game:
- Linux / macOS:
  ./game
- Windows:
  game.exe

---

## Future Improvements

- Add difficulty levels
- Add more math operations (+, -, /)
- Limit maximum rounds
- Improve input validation
- Convert code into functions for better structure

## Author
Ayaz Vatansever
Beginner C Programming Practice – 2026

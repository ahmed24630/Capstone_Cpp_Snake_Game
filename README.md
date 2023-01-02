# Capstone_Cpp_Snake_Game

# Udacity C++ Nanodegree Capstone Snake Game

## About

This is the final capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). 

The poject chosen was the snake game that was provided as the starter code provided by udacity in this [repo] (https://github.com/udacity/CppND-Capstone-Snake-Game) and inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) StackOverflow post.

<img src="snake_game.gif"/>


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)


## Code Criterion

Please check on PlotExplain.png for what have been added and how they flow

<img width="571" alt="PlotExplain" src="https://user-images.githubusercontent.com/30057649/210231470-e64fef08-a724-4b24-b641-8104960c4562.png">

1. Loops, Function and I&O

#1.1
  The project demonstrates an understanding of C++ functions and control structures
  --> DONE:
  ---> Snake::askGrowingSpeed() this function, which called in game::run
  ---> SnakeFoods also met this spec

#1.3
  The project accepts user input and processes the input.
  --> DONE:
  ---> Snake::askGrowingSpeed ask user enter their snake growing speed, and this speed to growing snake during the game

2. OOP

#2.1
  The project uses Object Oriented Programming techniques.
  --> DONE:
  ---> SnakeFoods class is designed as OOP
  ---> refatored Snake, Game these two classes for OOP

#2.2 
  Classes use appropriate access specifiers for class members
  --> DONE:
  ---> Set&get methods inside SnakeFoods to access its members
  ---> Snake class members been assigned to propriate type:
       moved below two functions into public
       void Update();
       void GrowBody();
       bool SnakeCell(const int &x, const int &y);


#2.3 
  Class constructors utilize member initialization lists.
  --> Done:
  ---> SnakeFoods
  ---> Snake::Snake(int grid_width, int grid_height);

#2.4 
  Classes abstract implementation details from their interfaces.
  --> Done
  ---> See SnakeFoods class

#2.5 
  Classes follow an appropriate inheritance hierarchy
  --> Done
  ---> See SnakeFoods class and its children DefFood and SuperFood


#2.6 
  Overloaded functions allow the same function to operate on different parameters.
  --> Done
  ---> See SnakeFoods class

3. Memory Management

#3.1 
  The project makes use of references in function declarations.
  At least two variables are defined as references, or two functions use pass-by-reference in the project code.
  --> Done:
  ---> bool Snake::SnakeCell(const int &x, const int &y) two inputs as reference 

#3.2
  The project uses destructors appropriately.
  --> Done
  ---> snake.h ~Snake()

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
5. Enter snake growing speed in terminal console
6. Play && Enjoy!

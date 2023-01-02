#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "SDL.h"
#include <string>
typedef std::vector<int> ints;

class Snake {
 public:
 // constructor & desctructor
  Snake();
  Snake(int grid_width, int grid_height);
  ~Snake();
   enum class Direction
   {
     kUp,
     kDown,
     kLeft,
     kRight
   };
   Direction direction = Direction::kUp;

   void Update();
   void GrowBody();
   bool SnakeCell(const int &x, const int &y);

   // members
   float speed{0.01f};    // initialized speed = 0.01
   int size{1};
   bool alive{true};
   float head_x;
   float head_y;
   bool moved{false};
   std::vector<SDL_Point> body;
   int score{0};
   // new: get growing speed
   float growSpeed{0.02f};
   void GetSpeed();

 private:
  bool growing{false};
  int grid_width;
  int grid_height;

  void UpdateHead();
  void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell);
};

class SnakeFeed
{
public:
    // Constructor & destructor
    SnakeFeed(int posX, int posY, int scoreVal, std::string foodName)
        : x_(posX), y_(posY), val_(scoreVal), name_(foodName) {}

    // Overloaded constructor
    // foodColor is RGB color, size is always 3
    SnakeFeed(int posX, int posY, int scoreVal, std::string foodName, std::vector<int> foodColor)
        : x_(posX), y_(posY), val_(scoreVal), name_(foodName), color_(foodColor) {}

    // get and set methods
    void setX(int x) { x_ = x; }
    int getX() { return x_; }

    void setY(int y) { y_ = y; }
    int getY() { return y_; }

    void setVal(int v) { val_ = v; }
    int getVal() { return val_; }

    void setName(std::string n) { name_ = n; }
    std::string getName() { return name_; }

    void setColor(std::vector<int> c) { color_ = c; }
    std::vector<int> getColor() { return color_; }
private:
    int x_{0};
    int y_{0};
    int val_{0};
    std::string name_{"Default"};
    std::vector<int> color_ = {255, 255, 0}; // initial color as yellow
};

/*good foods*/
// dFood: default food will increase speed
class SetFeed : public SnakeFeed
{
public:
    SetFeed(int x, int y) : SnakeFeed(x, y, 1, "Default") {}
};

// SuperFood: super food will add a lot score (20), color white
class SetSuperFeed : public SnakeFeed
{
public:
    SetSuperFeed(int x, int y) : SnakeFeed(x, y, 20, "Superb", {230, 230, 250}) {}
};
#endif
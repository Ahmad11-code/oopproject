#pragma once

#include <iostream>
using namespace std;


class SnakeGame {

private:
	SnakeSegment[] snakeBody;
	Point food;
	Grid grid;

public:
	moveSnake();
	detectCollision();
	increaseDifficulty();

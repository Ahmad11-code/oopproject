#pragma once

#include <iostream>
using namespace std;

class InputSystem {
private:
	KeyMap keyMappings;
	inputState inputState;

public:
	mapKey(string key, Action action);
	handleInput();

};
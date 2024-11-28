#pragma once

#include <iostream>
using namespace std;

class WordleGame {

private:

	Letter[][] letterGrid;
	Keyboard virtualKeyboard;
	WordDictionary wordDictionary;

public:
	validateWord();
	updateKeyboard();
	giveFeedback();

};

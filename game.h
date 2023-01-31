#pragma once
#include "SDL.h"
#include <iostream>

class Game {
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool full_screen);
	void handle_events();
	void update();
	void render();
	void clean();

	bool running() {
		return is_running;
	}

private:
	int count = 0;
	bool is_running;
	SDL_Window* window;
	SDL_Renderer* renderer;


};
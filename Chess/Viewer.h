#pragma once
#include "Player.h"

class GameManager;

class Viewer
{
	GameManager * game_manager;

public:
	
	Viewer(); // not allow
	Viewer(GameManager*);
	~Viewer();

	void clear();
	void reset();

	void render_sf();
	void render_gf(Team);

	void render_board();
	void render_game_status(Team);

	Move get_move();
};


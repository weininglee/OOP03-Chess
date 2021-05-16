#include "Player.h"
#include "GameManager.h"

HumanPlayer::HumanPlayer(GameManager* gm,string _name):Player(gm) {
	name = _name;
}

Move HumanPlayer::OnMove() {
	return game_manager->viewer.get_move();
}

void HumanPlayer::OnPromote() {

}
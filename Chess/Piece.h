#pragma once

enum class Team
{
	White,
	Black
};

enum class PieceType {
	King,
	Queen,
	Rook,
	Bishop,
	Knight,
	Pawn
};

struct Position {
	int col;
	int row;

	Position();
	Position(int, int);

	bool operator == (Position b) {
		return (col == b.col && row == b.row);
	}
};

class Piece
{
public:
	Team team;
	PieceType piece_type;
	Position position;

	Piece();
	Piece(Team, PieceType, Position);
};


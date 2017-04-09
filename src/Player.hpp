#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
	public:

	Player(int x,int y);

	int get_X() const;
	int get_Y() const;

	void move_Up();
	void move_Right();
	void move_Down();
	void move_Left();
	private:
	
	int pos_X;
	int pos_Y;
};

#endif

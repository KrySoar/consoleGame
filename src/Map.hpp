#ifndef MAP_HPP
#define MAP_HPP

class Map {
	public:
	Map();
	void draw();
	int getBlock(int x,int y);
	void setBlock(int x,int y,int id);
	char setTile(int index);
	private:
	static int gridMap[];
};

#endif

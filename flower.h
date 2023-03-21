#pragma once
#include<SFML/Graphics.hpp>
class flower {
private:
	int xpos;
	int ypos;
	int color[3];
	sf::CircleShape petal;
	sf::RectangleShape stem;
public:
	flower(int x, int y, int c[3]);
	void draw(sf::RenderWindow& window);
	void randomcolor(int c[3]);
};


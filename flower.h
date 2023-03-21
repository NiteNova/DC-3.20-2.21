#pragma once
#include<SFML/Graphics.hpp>
class flower {
private:
	int xpos;
	int ypos;
	int color[9];
	sf::CircleShape petal;
	sf::CircleShape petal1;
	sf::CircleShape petal2;
	sf::RectangleShape stem;
public:
	flower(int x, int y);
	void draw(sf::RenderWindow& window);
	void randomcolor();
};


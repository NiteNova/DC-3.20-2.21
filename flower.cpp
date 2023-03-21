#include "flower.h"

//function definition for constructor
flower::flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; 
	color[1] = c[1];
	color[2] = c[2];
}

void flower::draw(sf::RenderWindow& window) {
	stem.setPosition(xpos, ypos);
	stem.setFillColor(sf::Color(0, 150, 0));
	stem.setSize(sf::Vector2f(20, 100));
	window.draw(stem);

	petal.setRadius(20);
	petal.setPosition(xpos-25, ypos - 15);
	petal.setFillColor(sf::Color(color[0], color[1], color[2]));
	window.draw(petal);
	petal.setRadius(20);
	petal.setPosition(xpos - 10, ypos - 35);
	petal.setFillColor(sf::Color(color[0], color[1], color[2]));
	window.draw(petal);
	petal.setRadius(20);
	petal.setPosition(xpos + 5, ypos - 15);
	petal.setFillColor(sf::Color(color[0], color[1], color[2]));
	window.draw(petal);
}

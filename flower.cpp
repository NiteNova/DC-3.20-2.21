#include "flower.h"
#include <iostream>
using namespace std;

//function definition for constructor
flower::flower(int x, int y) {
	xpos = x;
	ypos = y;
	for (int i = 0; i < 9; i++)
		color[i] = 255;

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
	petal1.setRadius(20);
	petal1.setPosition(xpos - 10, ypos - 35);
	petal1.setFillColor(sf::Color(color[3], color[4], color[5]));
	window.draw(petal1);
	petal2.setRadius(20);
	petal2.setPosition(xpos + 5, ypos - 15);
	petal2.setFillColor(sf::Color(color[6], color[7], color[8]));
	window.draw(petal2);
}
void flower::randomcolor() {
	for (int i = 0; i < 9; i++) {
		int rcolor = rand() % 255;
		cout << rcolor << endl;
		color[0 + i] = rcolor;
		
	}
}

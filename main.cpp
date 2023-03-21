#include <SFML/Graphics.hpp>
#include "birb.h"
#include "flower.h"

int main() {

	//this next line is an array. Arrays are a lot like python lists.
	int Acolor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int Kcolor[] = { 0, 200, 200 };
	int Jcolor[] = { 255, 0, 200 };
	int Tcolor[] = { 255, 200, 0 };
	int Alcolor[] = { 0, 0, 185 };

	



	birb Alex(200, 200, Acolor); //instantiate 1 birb
	birb Kevin(300, 200, Kcolor);
	birb Jevin(200, 300, Jcolor);
	birb Tam(300, 300, Tcolor);
	birb Alan(200, 400, Alcolor);
	flower f1(400, 400);
	flower f2(500, 500);
	flower f3(500, 300);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window
	srand(time(NULL));

	while (1) {//GAME LOOP OMG
		int random = rand() % 100;
		if (random <= 3) {
			Alex.fly();
			Kevin.fly();
			Jevin.fly();
			Tam.fly();
			Alan.fly();
		}
		
		int chance = rand() % 100;
		if (random <= 5) {
			f1.randomcolor();
			f2.randomcolor();
			f3.randomcolor();
		}
		window.clear();
		Alex.draw(window);
		Kevin.draw(window);
		Jevin.draw(window);
		Tam.draw(window);
		Alan.draw(window);

		f1.draw(window);
		f2.draw(window);
		f3.draw(window);
		window.display();
	}
}



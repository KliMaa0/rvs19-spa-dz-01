#include "Cvijet.h"


Cvijet::Cvijet(RenderWindow* window)
{
	this->window = window;



}

void Cvijet::draw()
{
	window->draw(drawsunce());
	window->draw(drawcvijet());
	window->draw(drawstabiljka());
	window->draw(drawpod());
	window->draw(drawlist());
	window->draw(drawlist2());
	
	if (sat.getElapsedTime().asMilliseconds()>5)
	{
		sat.restart();
		if (x>750)
		{
			x = 35;

		}
		else
		{
			x += 5;
		}
	}
}
CircleShape Cvijet::drawsunce()
{
	sunce.setRadius(20);
	sunce.setFillColor(sf::Color(255,255,0));
	sunce.setPosition(x, 15);

	return sunce;
}
CircleShape Cvijet::drawcvijet()
{
	cvijet.setRadius(50);
	cvijet.setFillColor(sf::Color(255, 255, 0));
	cvijet.setOutlineThickness(50);
	cvijet.setOutlineColor(sf::Color(255, 0, 0));
	cvijet.setPosition(355, 201);
	return cvijet;
}
RectangleShape Cvijet::drawstabiljka()
{
	stabiljka.setSize(sf::Vector2f(100, 100));
	stabiljka.setFillColor(sf::Color(0, 255, 0));
	stabiljka.setPosition(394, 350);
	stabiljka.setSize(sf::Vector2f(20, 300));
	return stabiljka;
}
RectangleShape Cvijet::drawpod()
{
	pod.setFillColor(sf::Color(0, 255, 0));
	pod.setSize(sf::Vector2f(800, 50));
	pod.setPosition(0, 570);
	return pod;
}
ConvexShape Cvijet::drawlist()
{
	list.setPointCount(3); // Postavite broj vrhova na 3 za trokutasti oblik
	list.setPoint(0, Vector2f(650, 470)); //  prvi vrh trokuta
	list.setPoint(1, Vector2f(500, 480)); //  drugi vrh trokuta
	list.setPoint(2, Vector2f(392.5, 550)); //  treæi vrh trokuta
	list.setFillColor(Color(0, 250, 0));
	
	return list;
}
ConvexShape Cvijet::drawlist2()
{
	list2.setPointCount(3); //  broj vrhova na 3 za trokutasti oblik
	list2.setPoint(0, Vector2f(200, 370)); //  prvi vrh trokuta
	list2.setPoint(1, Vector2f(400, 450)); //  drugi vrh trokuta
	list2.setPoint(2, Vector2f(410, 505)); //  treæi vrh trokuta
	list2.setFillColor(Color(0, 250, 0));

	return list2;
}
//Žic Ivona.
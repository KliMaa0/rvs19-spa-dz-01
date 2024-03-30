#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Cvijet
{
private:
	Clock sat;
	float x;
	float scaleFactor;
	CircleShape sunce;
	CircleShape cvijet;
	RectangleShape stabiljka;
	RectangleShape pod;
	ConvexShape list;
	ConvexShape list2;
	
	RenderWindow* window;
public:
	Cvijet(RenderWindow* window);
	void draw();
	CircleShape drawsunce();
	CircleShape drawcvijet();
	RectangleShape drawstabiljka();
	RectangleShape drawpod();
	ConvexShape drawlist();
	ConvexShape drawlist2();
};
//Žic Ivona.

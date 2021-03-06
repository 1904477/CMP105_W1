#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape bottomrightrectangle;
	sf::RectangleShape rect;
	sf::RectangleShape rectblue;
	sf::RectangleShape rectred;
	sf::RectangleShape rectgreen;
	sf::Font font;
	sf::Text text;
	sf::CircleShape circle;
};
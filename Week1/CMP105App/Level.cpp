#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects

	//Blue rectangle
	rectblue.setSize(sf::Vector2f(90, 90));
	rectblue.setPosition(100, 100);			//rectangle initialised
	rectblue.setFillColor(sf::Color::Blue);
	sf::Vector2f halfsize = rectblue.getSize();

	halfsize.x /= 2.0f; //dividing by 2 to get the center
	halfsize.y /= 2.0f;	//dividing by 2 to get the center
	rectblue.setOrigin(halfsize);


	//Red rectangle
	rectred.setSize(sf::Vector2f(60, 60));
	rectred.setPosition(100, 100);			//rectangle initialised
	rectred.setFillColor(sf::Color::Red);

	sf::Vector2f halfsize1 = rectred.getSize();
	halfsize1.x /= 2.0f; //dividing by 2 to get the center
	halfsize1.y /= 2.0f;	//dividing by 2 to get the center
	rectred.setOrigin(halfsize1);

	//Green rectangle
	rectgreen.setSize(sf::Vector2f(30,30));
	rectgreen.setPosition(100, 100);			//rectangle initialised
	rectgreen.setFillColor(sf::Color::Green);

	sf::Vector2f halfsize2 = rectgreen.getSize();
	halfsize2.x /= 2.0f; //dividing by 2 to get the center
	halfsize2.y /= 2.0f;	//dividing by 2 to get the center
	rectgreen.setOrigin(halfsize2);

	//Blue circle
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setRadius(50);
	circle.setPosition(550,300);

	//Text

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout<<"Font is not loaded ";
	}

	sf::Vector2f position;
	position.x = 500;
	position.y = 20;
	text.setFont(font);
	text.setPosition(position);
	text.setString("I'll conquer the world ");
	text.setCharacterSize(24);
	

	
	
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rectblue);
	window->draw(rectred);
	window->draw(rectgreen);
	window->draw(circle);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
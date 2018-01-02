//
// memo.cpp for ok in /home/alexandre/Documents/cpp/memo/src/
//
// Made by Alexandre Chamard-bois
// Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
//
// Started on  Sat Sep 30 11:15:12 2017 Alexandre Chamard-bois
// Last update Sun Oct  8 18:36:09 2017 Alexandre Chamard-bois
//

#include <iostream>
#include <array>
#include <SFML/Graphics.hpp>

#include "window.hpp"
// #include "main.hpp"

// void initC(t_box& box)
// {
// 	box.window.create(sf::VideoMode(WIDTH, HEIGHT, 32), "memo++");
// 	box.window.setFramerateLimit(60);
// 	box.texture.loadFromFile("sprites/button_new_memo.png");
// 	box.background.setTexture(box.texture);
// 	box.status = false;
// }

int main()
{
	memo::Window window;
	sf::Event event;

	while (window.getStatus() == OPEN) {
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.setStatus(CLOSE);
			}
		}
		window.clear();
		// window.draw(window.background);
		window.display();
	}
	return (0);
}

// #include <sstream>
// int toto(std::string const & toParse) {
//     std::stringstream ss(toParse);
//     char cl;
//     std::string s;
//     int value;
//
//     ss >> s >> cl >> value;
//     std::cout << "is it working ? " << s << cl << " " << value << std::endl;
// }

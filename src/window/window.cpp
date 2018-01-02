/*
** sreen.cpp for memo in /home/alexandre/Documents/git/memo/src/screen
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Sat Dec 30 17:49:43 2017 alexandre Chamard-bois
** Last update Sat Dec 30 18:17:00 2017 alexandre Chamard-bois
*/

#include "window.hpp"

memo::Window::Window()
{
	this->window.create(sf::VideoMode(WIDTH, HEIGHT, 32), "memo++");
	this->window.setFramerateLimit(60);
	this->status = OPEN;
}

memo::Window::~Window()
{
	this->window.close();
}

bool memo::Window::pollEvent(sf::Event & event)
{
	return (this->window.pollEvent(event));
}


void memo::Window::draw(sf::Sprite const& sprite)
{
	this->window.draw(sprite);
}

void memo::Window::clear()
{
	this->window.setActive();
	this->window.clear();
}

void memo::Window::display()
{
	this->window.display();
}

sf::Vector2u memo::Window::getSize() const
{
	return (this->window.getSize());
}

bool memo::Window::getStatus() const
{
	return (this->status);
}

void memo::Window::setStatus(bool status)
{
	this->status = status;
}

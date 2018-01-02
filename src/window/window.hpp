/*
** screen.hpp for memo in /home/alexandre/Documents/git/memo/src/screen
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Sat Dec 30 17:36:33 2017 alexandre Chamard-bois
** Last update Tue Jan 02 14:43:31 2018 alexandre Chamard-bois
*/

#ifndef SCREEN_HPP_
# define SCREEN_HPP_

# include "camera.hpp"
# include "SFML/Graphics.hpp"

# define WIDTH	500
# define HEIGHT	500

# define OPEN	true
# define CLOSE	false

namespace memo {

	class Window {
	public:
		Window();
		~Window();
		bool pollEvent(sf::Event &);
		void draw(sf::Sprite const&);
		void clear();
		void display();
		sf::Vector2u getSize() const;

		bool getStatus() const;
		void setStatus(bool);

	private:
		sf::RenderWindow	window;
		bool			status;
		sf::Texture		texture;
		sf::Sprite		background;
	};
}

#endif

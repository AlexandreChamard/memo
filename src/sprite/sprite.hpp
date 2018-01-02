//
// sprite.hpp for ok in /home/alexandre/Documents/cpp/memo/src/sprite/
//
// Made by Alexandre Chamard-bois
// Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
//
// Started on  Sat Sep 30 10:32:39 2017 Alexandre Chamard-bois
// Last update Sat Oct  7 21:53:21 2017 Alexandre Chamard-bois
//

#ifndef SPRITE_HPP_
# define SPRITE_HPP_

# include <SFML/Graphics.hpp>
# include <string>

namespace memo {

    enum type {
        None,
        Color,
        File,
    };

    class Sprite {
    public:
        Sprite();
        Sprite(const memo::Sprite &);
        Sprite(std::string &);
        memo::Sprite &operator=(const memo::Sprite&);
        ~Sprite();

        size_t getType() const {return (this->type);};
        std::string getFilename() const {return (this->filename);};
        sf::Color getColor() const {return (this->color);};
        sf::Vector2u getSize() const {return (this->size);};
        sf::Texture getTexture() const {return (this->texture);};
        sf::Sprite getSprite() const {return (this->sprit);};

    private:
        size_t                  type;
        std::string             filename;
        sf::Color               color;
        sf::Vector2u            size;
        sf::Texture             texture;
        sf::Sprite              sprit;
        std::vector<sf::Uint8>  pxs;
    };
}
#endif

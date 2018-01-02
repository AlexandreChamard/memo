//
// memo.hpp for ok in /home/alexandre/Documents/cpp/memo/src/
//
// Made by Alexandre Chamard-bois
// Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
//
// Started on  Sat Sep 30 17:04:48 2017 Alexandre Chamard-bois
// Last update Sat Sep 30 18:48:06 2017 Alexandre Chamard-bois
//


#ifndef memo_HPP_
# define memo_HPP_

// #include "sprite.hpp"
#include "camera.hpp"
#include "SFML/Graphics.hpp"

# define WIDTH 200
# define HEIGHT 200

typedef struct s_map{} t_map;
typedef struct s_camera{} t_camera;

typedef struct          s_box {
    sf::RenderWindow    window;
    sf::Event           event;
    int                 close;
    sf::Texture         texture;
    sf::Sprite          background;
    t_map               map;
    memo::Camera        camera;
}                       t_box;

#endif

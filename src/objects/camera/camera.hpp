//
// camera.hpp for ok in /home/alexandre/Documents/cpp/memo/src/camera/
//
// Made by Alexandre Chamard-bois
// Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
//
// Started on  Sat Sep 30 17:56:13 2017 Alexandre Chamard-bois
// Last update Sat Sep 30 19:13:49 2017 Alexandre Chamard-bois
//


#ifndef CAMERA_HPP_
# define CAMERA_HPP_

#include <SFML/Graphics.hpp>

namespace memo {
    # define ZOOM_MIN     0.5
    # define ZOOM_MAX     2.0

    class Camera {
    public:
        Camera();
        ~Camera() = default;

        void zoomIn(float fast = 1);
        void zoomOut(float fast = 1);
        void move(sf::Vector2f);

    private:
        sf::Vector2f    pos;
        float           zoom{1.0};
        float           speed{0.1};
        float           zoomSpeed{0.1};
    };
}

#endif

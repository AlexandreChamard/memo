//
// camera.cpp for ok in /home/alexandre/Documents/cpp/memo/src/camera/
//
// Made by Alexandre Chamard-bois
// Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
//
// Started on  Sat Sep 30 17:59:39 2017 Alexandre Chamard-bois
// Last update Sat Sep 30 18:45:49 2017 Alexandre Chamard-bois
//

#include <algorithm>
#include "camera.hpp"

memo::Camera::Camera(): zoom(1), speed(.1), zoomSpeed(.1) {
    pos.x = 0;
    pos.y = 0;
}

void memo::Camera::zoomIn(float fast) {
    this->zoom = std::max((double)(this->zoom - this->zoomSpeed * fast), ZOOM_MIN);
}

void memo::Camera::zoomOut(float fast) {
    this->zoom = std::min((double)(this->zoom + this->zoomSpeed * fast), ZOOM_MAX);
}

void memo::Camera::move(sf::Vector2f fast) {
    this->pos.x += this->speed * fast.x;
    this->pos.y += this->speed * fast.y;
}

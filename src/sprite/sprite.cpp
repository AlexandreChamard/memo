//
// sprite.cpp for ok in /home/alexandre/Documents/cpp/memo/src/sprite/
//
// Made by Alexandre Chamard-bois
// Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
//
// Started on  Sat Sep 30 14:23:39 2017 Alexandre Chamard-bois
// Last update Sat Oct  7 22:00:24 2017 Alexandre Chamard-bois
//

#include <iostream>
#include "sprite.hpp"

memo::Sprite::Sprite() {
    this->type = None;
    this->size.x = 0;
    this->size.y = 0;
}

memo::Sprite::Sprite(memo::Sprite const& sprite) {
    this->type = sprite.type;
    this->size = sprite.size;
    this->color = sprite.color;
    this->texture = sprite.texture;
    this->sprit = sprite.sprit;
    this->filename = sprite.filename;
}

memo::Sprite::Sprite(std::string & filename) {
    if (this->texture.loadFromFile(filename)) {
        this->type = File;
        this->filename = filename;
        this->size = texture.getSize();
    } else {
        this->type = None;
    }
}

memo::Sprite &memo::Sprite::operator=(memo::Sprite const& sprite) {
    this->type = sprite.type;
    this->size = sprite.size;
    this->color = sprite.color;
    this->texture = sprite.texture;
    this->sprit = sprite.sprit;
    this->filename = sprite.filename;
    return (*this);
}

memo::Sprite::~Sprite() {
    std::cout << "sprite: destroy" << std::endl;
}

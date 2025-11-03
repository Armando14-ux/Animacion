#ifndef GESTORDIBUJOS_HPP
#define GESTORDIBUJOS_HPP

#include "Dibujo.hpp"
#include <vector>

class GestorDibujos {
public:
    std::vector<Dibujo> dibujos;

    void Agregar(const Dibujo& dibujo);
    void DibujarTodos(ftxui::Screen& screen) const;
};

#endif
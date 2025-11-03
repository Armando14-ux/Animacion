#include "GestorDibujos.hpp"

void GestorDibujos::Agregar(const Dibujo& dibujo) {
    dibujos.push_back(dibujo);
}

void GestorDibujos::DibujarTodos(ftxui::Screen& screen) const {
    for (const auto& dibujo : dibujos)
        dibujo.Dibujar(screen);
}
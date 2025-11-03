#include "Dibujo.hpp"

Dibujo::Dibujo(int x_, int y_, std::vector<std::u32string> forma_, ftxui::Color color_)
    : x(x_), y(y_), forma(std::move(forma_)), color(color_) {}

void Dibujo::Dibujar(ftxui::Screen& screen) const {
    for (size_t i = 0; i < forma.size(); ++i) {
        for (size_t j = 0; j < forma[i].size(); ++j) {
            screen.PixelAt(x + j, y + i).character = forma[i][j];
            screen.PixelAt(x + j, y + i).foreground_color = color;
        }
    }
}

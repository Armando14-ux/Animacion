#ifndef DIBUJO_HPP
#define DIBUJO_HPP

#include <ftxui/screen/color.hpp>
#include <ftxui/screen/screen.hpp>
#include <string>
#include <vector>

class Dibujo {
public:
    int x, y;
    std::vector<std::u32string> forma;
    ftxui::Color color;

    Dibujo(int x_, int y_, std::vector<std::u32string> forma_, ftxui::Color color_);
    void Dibujar(ftxui::Screen& screen) const;
};

#endif

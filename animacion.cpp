#include <ftxui/screen/screen.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include "Dibujo.hpp"
#include "GestorDibujos.hpp"

using namespace ftxui;

int main() {
    auto screen = Screen::Create(Dimension::Fixed(80), Dimension::Fixed(24));

    const std::vector<std::u32string> nave = {
        U"    /\\    ",
        U"   /==\\   ",
        U"  |====|  ",
        U"   ||||   ",
    };

    const std::vector<std::u32string> alien = {
        U"  /MM\\  ",
        U" (o  o) ",
        U" | -- | ",
        U"  \\__/  "
    };

    const std::vector<std::u32string> bala = {
        U"  |  ",
        U"  |  "
    };

    GestorDibujos gestor;

    for (int i = 0; i < 5; ++i)
        gestor.Agregar(Dibujo(10 + i * 12, 3, alien, Color::Green));

    Dibujo player(35, 18, nave, Color::Cyan);
    Dibujo bullet(38, 17, bala, Color::Yellow);

    int frames = 150;

    for (int frame = 0; frame < frames; ++frame) {
        screen.Clear();

        int dx = (frame % 20 < 10) ? 1 : -1;
        for (auto& d : gestor.dibujos) d.x += dx;

        bullet.y -= 1;
        if (bullet.y < 1) bullet.y = player.y - 1;

        player.x = 30 + (frame % 20);

        gestor.DibujarTodos(screen);
        player.Dibujar(screen);
        bullet.Dibujar(screen);

        std::cout << screen.ToString();
        std::cout << screen.ResetPosition() << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }

    return 0;
}

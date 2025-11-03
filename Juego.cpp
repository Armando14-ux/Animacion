#include "Juego.hpp"
#include <thread>
#include <chrono>
#include <iostream>
#include <ftxui/screen/screen.hpp>

void Juego::ejecutar() {
    using namespace ftxui;

    GestorDibujos gestor;

    // Dibujo simple para probar
    std::vector<std::u32string> nave = {
        U"  /\\  ",
        U" /==\\ ",
        U"|====|",
        U"  ||  "
    };

    gestor.Agregar(Dibujo(10, 5, nave, Color::Cyan));

    auto screen = Screen::Create(Dimension::Fixed(40), Dimension::Fixed(15));

    for (int i = 0; i < 10; ++i) {
        screen.Clear();
        gestor.DibujarTodos(screen);

        std::cout << screen.ToString();
        std::cout << screen.ResetPosition() << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}

# Manual de Ejecución - Proyecto Segundo Parcial (POO y Avanzada)

Este documento explica cómo compilar y ejecutar el proyecto de animación ASCII utilizando clases propias y la librería externa FTXUI. Está diseñado para ser presentado al profesor como evidencia funcional del trabajo.

---

## 1. Requisitos del sistema

Antes de compilar, asegúrese de tener instalado:

- Un compilador C++ compatible con C++17 (por ejemplo, MinGW o MSYS2)
- CMake
- Make
- Git
- La librería FTXUI (ver instrucciones abajo)

---

## 2. Instalación de la librería FTXUI

Si no se cuenta con la librería FTXUI instalada, seguir estos pasos:

```bash
git clone https://github.com/ArthurSonzogni/ftxui.git
cd ftxui
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
mingw32-make
Esto compilará la librería y generará los archivos necesarios para enlazarla con el proyecto.

3. Archivos del proyecto
El proyecto está compuesto por los siguientes archivos:

animacion.cpp: archivo principal que ejecuta la animación

Dibujo.hpp y Dibujo.cpp: clase que representa un dibujo ASCII

GestorDibujos.hpp y GestorDibujos.cpp: clase que gestiona múltiples dibujos

4. Compilación del proyecto
Una vez instalada la librería FTXUI, se puede compilar el proyecto con el siguiente comando:

bash
g++ -std=c++17 -Wall animacion.cpp Dibujo.cpp GestorDibujos.cpp -o animacion ^
-I ruta/a/ftxui/include ^
-L ruta/a/ftxui/build ^
-lftxui-screen -lftxui-dom -lftxui-component -pthread
Reemplazar ruta/a/ftxui por la ruta real donde se encuentra la carpeta ftxui.

5. Ejecución del programa
Una vez compilado, ejecutar el programa desde la terminal:

bash
./animacion
Esto mostrará una animación en consola utilizando caracteres ASCII y colores.

6. Evidencia en video
Se debe grabar la pantalla mientras se ejecuta el programa para mostrar la animación. El video debe incluir:

La ejecución del archivo animacion

La animación completa en consola
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I FTXUI/include
LDFLAGS = -L FTXUI/build -lftxui-screen -lftxui-dom -lftxui-component -pthread

TARGET = animacion
SRC = animacion.cpp Dibujo.cpp GestorDibujos.cpp Juego.cpp
HDR = Dibujo.hpp GestorDibujos.hpp Juego.hpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

clean:
	rm -f $(TARGET)

#include<iostream>

struct Coordenada {
    int x, y;
};

int main() {

    struct Coordenada punto = {0, 0};
    punto.x = 20;

    std::cout << "x=" << punto.x << ", y=" << punto.y;
    return 0;
}
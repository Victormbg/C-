#include <iostream>

int multiplicar(int X, int Y)
{
    // Modifica o X para 2
    X = 2;
    return X*Y;
}

int main(int argc, char** argv)
{
    int valor = 3;
    int resultado = multiplicar(valor, 3);
    std::cout << valor; // SAÍDA: 3
}

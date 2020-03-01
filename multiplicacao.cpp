#include <iostream>

// Função para multiplicar
// Recebe dois inteiros (X,Y) e retorna um inteiro (X*Y)
int multiplicar(int X, int Y)
{
    return X*Y;
}

int main(int argc, char** argv)
{
    std::cout << multiplicar(2,2);
    std::cin.get(); // Pausa a execução do programa até o usuário pressionar uma tecla
    return 0;
}

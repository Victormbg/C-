#include <iostream>

// Função para multiplicar
// Recebe dois inteiros (X,Y) e retorna um inteiro (X*Y)
int multiplicar(int X, int Y)
{
    return X*Y;
}

int main(int argc, char** argv)
{
    int resultado = multiplicar(5,3); // Multiplica 5 x 3 e armazena o resultado
    int final = multiplicar(resultado,2); // Multiplica o resultado anterior * 2
    std::cout << final; // Imprime o resultado final
    std::cin.get(); // Pausa a execução do programa até o usuário pressionar uma tecla
    return 0;
}

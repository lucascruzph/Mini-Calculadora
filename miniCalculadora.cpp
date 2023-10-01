#include <iostream>

class Calculadora
{
public:
    int somar(int a, int b)
    {
        return a + b;
    }
    int subtrair(int a, int b)
    {
        return a - b;
    }
    int multiplicar(int a, int b)
    {
        return a * b;
    }
    int dividir(int a, int b)
    {
        return a / b;
    }
};

int main()
{
    /*
    int num1 = 5;
    int num2 = 7; */

    int somarNumeros = 1;
    int subtrairNumeros = 2;
    int multiplicarNumeros = 3;
    int dividirNumeros = 4;

    int escolhaOperacao;

    std::cout << "Comece escolhendo o tipo de operação\n";
    std::cout << "Para somar digite 1\n";
    std::cout << "Para subtrair digite 2\n";
    std::cout << "Para multiplicar digite 3\n";
    std::cout << "Para dividir digite 4\n";

    std::cout << "Escolha a operação: ";
    std::cin >> escolhaOperacao;

    if (escolhaOperacao == 1)
    {
        Calculadora minhaCalculadora;
        int num1, num2;

        std::cout << "Digite o primeiro número: ";
        std::cin >> num1;

        std::cout << "Digite o segundo número: ";
        std::cin >> num2;

        int resultado = minhaCalculadora.somar(num1, num2);
        std::cout << "A soma de " << num1 << " e " << num2 << " é " << resultado << std::endl;
    }
    if (escolhaOperacao == 2)
    {
        Calculadora minhaCalculadora;
        int num1, num2;

        std::cout << "Digite o primeiro número: ";
        std::cin >> num1;

        std::cout << "Digite o segundo número: ";
        std::cin >> num2;

        int resultado = minhaCalculadora.subtrair(num1, num2);
        std::cout << "A subtração de " << num1 << " e " << num2 << " é " << resultado << std::endl;
    }
    if (escolhaOperacao == 3)
    {
        Calculadora minhaCalculadora;
        int num1, num2;

        std::cout << "Digite o primeiro número: ";
        std::cin >> num1;

        std::cout << "Digite o segundo número: ";
        std::cin >> num2;

        int resultado = minhaCalculadora.multiplicar(num1, num2);
        std::cout << "A multiplicação de " << num1 << " e " << num2 << " é " << resultado << std::endl;
    }
    if (escolhaOperacao == 4)
    {
        Calculadora minhaCalculadora;
        int num1, num2;

        std::cout << "Digite o primeiro número: ";
        std::cin >> num1;

        std::cout << "Digite o segundo número: ";
        std::cin >> num2;
        
        //Parei aqui tentando fazer uma divisão entre numeros não inteiros
        int resultado = minhaCalculadora.dividir(num1, num2);
        std::cout << "A divisão de " << num1 << " e " << num2 << " é " << resultado << std::endl;
    }

    return 0;
}
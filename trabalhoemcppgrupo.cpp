#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>


void quenteOuFrio() {
    int numeroSecreto = 42;
    int palpite;
    std::cout << "Adivinhe o numero secreto: ";
    std::cin >> palpite;
    if (palpite == numeroSecreto) {
        std::cout << "Acertou!\n";
    } else if (abs(palpite - numeroSecreto) <= 5) {
        std::cout << "Quente!\n";
    } else {
        std::cout << "Frio!\n";
    }
}

void inverteLetras() {
    std::cin.ignore();
    std::string texto;
    std::cout << "Digite o texto: ";
    std::getline(std::cin, texto);
    std::reverse(texto.begin(), texto.end());
    std::cout << "Invertido: " << texto << std::endl;
}

void alternaMaiusculasMinusculas() {
    std::cin.ignore();
    std::string texto;
    std::cout << "Digite o texto: ";
    std::getline(std::cin, texto);
    for (size_t i = 0; i < texto.size(); ++i) {
        if (i % 2 == 0)
            texto[i] = std::toupper(texto[i]);
        else
            texto[i] = std::tolower(texto[i]);
    }
    std::cout << "Alternado: " << texto << std::endl;
}

int main() {
    int opcao;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Quente ou Frio\n";
        std::cout << "2. Inverte Letras\n";
        std::cout << "3. Alterna Maiusculas e Minusculas\n";
        std::cout << "0. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                quenteOuFrio();
                break;
            case 2:
                inverteLetras();
                break;
            case 3:
                alternaMaiusculasMinusculas();
                break;
            case 0:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opcao invalida!\n";
        }
        std::cout << std::endl;
    } while (opcao != 0);

    return 0;
}
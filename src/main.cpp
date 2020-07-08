#include <iostream>
#include <carro.h>

int main(){
    Carro c1("Sedan", "XYZ-0102", 4, "Preto");
    Carro car;
    Carro c2("Sedan", "XYZ-0102", 4, "Preto");

    std::cout << "Total de carros: " << car.quantCarros << std::endl;
    std::cout << std::endl;

    std::cout << "Tipo do carro: " << c1.tipo << std::endl;
    std::cout << "Quantidade de portas: " << c1.numPortas << std::endl;
    std::cout << "Placa do carro: " << c1.placa << std::endl;
    std::cout << "A cor do carro é: " << c1.cor << std::endl;

    c1.ligaCarro();
    c1.acelera(50);
    std::cout << "A velocidade atual é: " << c1.velocidade << "KM/H" << std::endl;

    c1.freia (20);
    std::cout << "A velocidade atual é: " << c1.velocidade << "KM/H" << std::endl;

    return 0;
}
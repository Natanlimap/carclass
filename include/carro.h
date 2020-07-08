#ifndef CARRO_H
#define CARRO_H 

#include <string.h>
#include <iostream>
#include <motor.h>

class Carro{
    public:

    std::string tipo;
    std::string placa;
    int numPortas;
    int velocidade;
    std::string cor;
    Motor motor;

    
    static int quantCarros;

	Carro(std::string rtipo, std::string rplaca, int rnumPortas, std::string rcor);
    Carro();

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();
};

#endif
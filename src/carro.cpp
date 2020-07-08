#include <carro.h>

int Carro::quantCarros;

Carro::Carro(std::string rtipo, std::string rplaca, int rnumPortas, std::string rcor)
:tipo(rtipo), placa(rplaca), numPortas(rnumPortas), cor(rcor){
   this->quantCarros += 1;

}

Carro::Carro(){
    this->cor = "Branco";
    this->quantCarros += 1;
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    this->motor.partida();
}

#include "../headers/cavalo.h"

Cavalo::Cavalo(float velocidade, std::string nome, std::string cor) 
    : AnimalCorrida(velocidade, nome, cor), _posicaoAtual(0){}

void Cavalo::mover(){
    if(this->_posicaoAtual < 200){
        this->_posicaoAtual += this->_velocidade*4;       
    } else {
        std::cout << this->_nome << " terminou a corrida\n";
    }
}
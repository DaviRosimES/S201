#pragma once
#include <iostream>
#include "animalcorrida.h"

class Cavalo : public AnimalCorrida{
public:
    Cavalo(float velocidade, std::string nome, std::string cor);
    void mover();
private:
    float _posicaoAtual;
};
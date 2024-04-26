#pragma once
#include <string>

class AnimalCorrida{
public:
    float _velocidade;
    std::string _nome;
    std::string _cor;
    AnimalCorrida(float velocidade, std::string nome, std::string cor ){
        this->_velocidade = velocidade;
        this->_nome = nome;
        this->_cor = cor;
    }
};
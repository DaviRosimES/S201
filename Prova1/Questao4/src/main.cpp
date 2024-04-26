#include "headers/cavalo.h"

int main(){
    Cavalo c1(10, "Pangaré", "Preto");
    Cavalo c2(11, "Pé de Pano", "Branco");
    Cavalo c3(12, "Trovão", "Marrom");

    for(int i = 0; i < 5; ++i){
        c1.mover();
        c2.mover();
        c3.mover();
    }

    return 0;
}
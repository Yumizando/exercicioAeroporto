#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#define NPistas 2
#define NVoos 100

using namespace std;

struct Pista{
    private:
        int comprimento;
        string Identificacao;
        int largura;
        int LimitePeso;

    public:
        Pista(){
        }
};

struct Voo{
    private:
        string codigo;
        string origem;
        string destino;
        int pesoAviao;
        int velocidadeMaxima;
        int KMPercurso;

    public:
        Voo(){
        }
};

struct Aeroporto{
    private:
        string IdentificadorAeroporto;
        int latitude;
        int longitude;
        string cidade;
        Pista Pistas[NPistas];
        Voo PlanosVoo[NPistas];
        Voo FilaDecolagem[NVoos];

    public:
        Aeroporto(){
        }
};

int main (void){

}

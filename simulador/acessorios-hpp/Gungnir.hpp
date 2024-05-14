#ifndef GUNGNIR
#define GUNGNIR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Gungnir : public ArmaAtaque
{
    public:
        Gungnir(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
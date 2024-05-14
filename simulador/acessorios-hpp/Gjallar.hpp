#ifndef GJALLAR
#define GJALLAR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Gjallar : public ArmaAtaque
{
    public:
        Gjallar(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
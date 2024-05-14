#ifndef XIUHCOATL
#define XIUHCOATL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Xiuhcoatl : public ArmaAtaque
{
    public:
        Xiuhcoatl(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
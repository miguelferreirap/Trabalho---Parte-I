#ifndef HARPE
#define HARPE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Harpe : public ArmaAtaque
{
    public:
        Harpe(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
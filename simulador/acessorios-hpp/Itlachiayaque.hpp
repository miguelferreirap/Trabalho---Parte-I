#ifndef ITLACHIAYAQUE
#define ITLACHIAYAQUE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Itlachiayaque : public ArmaDefesa
{
    public:
        Itlachiayaque(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
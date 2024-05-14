#ifndef SPELLBRAKER
#define SPELLBRAKER

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Spellbraker : public ArmaDefesa
{
    public:
        Spellbraker(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
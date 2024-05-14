#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Spellbraker.hpp"

Spellbraker::Spellbraker(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Spellbraker::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Spellbraker::getResistencia() 
{
    return this->resistencia;
}
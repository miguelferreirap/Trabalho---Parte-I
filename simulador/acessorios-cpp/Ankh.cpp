#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Ankh.hpp"

Ankh::Ankh(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Ankh::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Ankh::getResistencia() 
{
    return this->resistencia;
}
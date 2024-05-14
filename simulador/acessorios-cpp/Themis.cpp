#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Themis.hpp"

Themis::Themis(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Themis::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Themis::getResistencia() 
{
    return this->resistencia;
}
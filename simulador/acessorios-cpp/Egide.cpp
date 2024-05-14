#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Egide.hpp"

Egide::Egide(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Egide::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Egide::getResistencia() 
{
    return this->resistencia;
}
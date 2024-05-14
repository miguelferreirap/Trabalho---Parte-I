#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Itlachiayaque.hpp"

Itlachiayaque::Itlachiayaque(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Itlachiayaque::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Itlachiayaque::getResistencia() 
{
    return this->resistencia;
}
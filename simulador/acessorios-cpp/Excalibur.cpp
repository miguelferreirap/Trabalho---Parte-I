#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Excalibur.hpp"

Excalibur::Excalibur(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Excalibur::gerarForcaAtaque()
{
    return maxForca;
}

string Excalibur::gerarRuidoAtaque()
{
    return "crep crep";
}

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Gjallar.hpp"

Gjallar::Gjallar(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Gjallar::gerarForcaAtaque()
{
    return maxForca;
}

string Gjallar::gerarRuidoAtaque()
{
    return "Tum Tum";
}

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Harpe.hpp"

Harpe::Harpe(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Harpe::gerarForcaAtaque()
{
    return maxForca;
}

string Harpe::gerarRuidoAtaque()
{
    return "slash slash";
}

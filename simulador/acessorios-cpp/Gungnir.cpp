#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Gungnir.hpp"

Gungnir::Gungnir(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Gungnir::gerarForcaAtaque()
{
    return maxForca;
}

string Gungnir::gerarRuidoAtaque()
{
    return "slish slish";
}

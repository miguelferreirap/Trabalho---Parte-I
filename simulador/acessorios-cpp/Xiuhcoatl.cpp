#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Xiuhcoatl.hpp"

Xiuhcoatl::Xiuhcoatl(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Xiuhcoatl::gerarForcaAtaque()
{
    return maxForca;
}

string Xiuhcoatl::gerarRuidoAtaque()
{
    return "smash smash";
}

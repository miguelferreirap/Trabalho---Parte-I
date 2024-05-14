#include "../personagens-hpp/Tezca.hpp"

Tezca::Tezca(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Tezca::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Tezca::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Tezca::pegarDescricao() 
{
    return "Tezca Tezca";
}
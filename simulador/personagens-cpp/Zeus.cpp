#include "../personagens-hpp/Zeus.hpp"

Zeus::Zeus(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Zeus::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Zeus::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Zeus::pegarDescricao() 
{
    return "Zeus Zeus";
}
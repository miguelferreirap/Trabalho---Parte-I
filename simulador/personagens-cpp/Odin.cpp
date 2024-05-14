#include "../personagens-hpp/Odin.hpp"

Odin::Odin(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Odin::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Odin::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Odin::pegarDescricao() 
{
    return "Odin Odin";
}
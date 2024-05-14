#include "../personagens-hpp/Efesto.hpp"

Efesto::Efesto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Efesto::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Efesto::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Efesto::pegarDescricao() 
{
    return "Efesto Efesto";
}
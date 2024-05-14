#ifndef TEZCA
#define TEZCA
#include "../core-simulador-hpp/Personagem.hpp"
class Tezca : public Personagem
{
    public:
        Tezca(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
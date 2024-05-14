#ifndef ODIN
#define ODIN
#include "../core-simulador-hpp/Personagem.hpp"
class Odin : public Personagem
{
    public:
        Odin(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
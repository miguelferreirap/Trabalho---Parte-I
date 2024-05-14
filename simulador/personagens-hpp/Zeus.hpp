#ifndef ZEUS
#define ZEUS
#include "../core-simulador-hpp/Personagem.hpp"
class Zeus : public Personagem
{
    public:
        Zeus(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
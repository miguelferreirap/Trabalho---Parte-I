#ifndef EFESTO
#define EFESTO
#include "../core-simulador-hpp/Personagem.hpp"
class Efesto : public Personagem
{
    public:
        Efesto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
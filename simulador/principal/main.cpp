#include <iostream>
#include <string>
#include "../acessorios-hpp/Ankh.hpp"
#include "../acessorios-hpp/Egide.hpp"
#include "../acessorios-hpp/Excalibur.hpp"
#include "../acessorios-hpp/Gjallar.hpp"
#include "../acessorios-hpp/Gungnir.hpp"
#include "../acessorios-hpp/Harpe.hpp"
#include "../acessorios-hpp/Itlachiayaque.hpp"
#include "../acessorios-hpp/Spellbraker.hpp"
#include "../acessorios-hpp/Themis.hpp"
#include "../acessorios-hpp/Xiuhcoatl.hpp"
#include "../personagens-hpp/Efesto.hpp"
#include "../personagens-hpp/Odin.hpp"
#include "../personagens-hpp/Tezca.hpp"
#include "../personagens-hpp/Thor.hpp"
#include "../personagens-hpp/Zeus.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* excalibur = new Excalibur("Espada de fogo",70,100);
    ArmaAtaque* gjallar = new Gjallar("Chifre do fim dos tempos",66,111);
    ArmaAtaque* gungnir = new Gungnir("Lanca que atravesa tudo",50,120);
    ArmaAtaque* harpe = new Harpe("Foice de Chronos",50,115);
    ArmaAtaque* xiuhcoatl = new Xiuhcoatl("Espada flamegante",67,110);

    ArmaDefesa* ankh = new Ankh("Chave da vida", 10);
    ArmaDefesa* egide = new Egide("Escudo impenetravel", 11);
    ArmaDefesa* itlachiayaque = new Itlachiayaque("Espelho que ve o futuro", 15);
    ArmaDefesa* spellbraker = new Spellbraker("Escudo quebra feitico", 12);
    ArmaDefesa* themis = new Themis("Balanca da justica", 14);
    
    Personagem* zeus = new Zeus(1, "Zeus", 500, gjallar, egide);
    Personagem* odin = new Odin(2, "Odin", 660, gungnir, ankh);
    Personagem* efesto = new Efesto(3, "Efesto", 600, excalibur, spellbraker);
    Personagem* tezca = new Tezca(4, "Tezca", 450, xiuhcoatl, itlachiayaque);
    Personagem* thor = new Thor(5, "Thor", 550, harpe, themis);
    
    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(zeus, 1);
    simulador->adicionarPersonagem(tezca, 1);
    simulador->adicionarPersonagem(odin, 2);
    simulador->adicionarPersonagem(efesto, 2);
    simulador->adicionarPersonagem(thor, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}
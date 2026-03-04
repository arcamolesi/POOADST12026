//Eventos.cpp
#include <iostream>
using namespace std;
#include "Tipoing.h"
#include "Participante.h"

int main (){

    Tipoing tp1;  // instanciação usando construtor padrão
    tp1.imprimir();

    //tp1.id = 1;
    tp1.setId(1);
    tp1.setDescricao("Inteira");
    tp1.setValor(25);
    tp1.imprimir();

    Tipoing tp2(2, "Meia Entrada", 12.5);
    //instanciação usando construtor parametrizado

    tp2.imprimir();

    Participante part1;
    part1.imprimir();


    Participante part2(2,"Almir", "Startup Day",
                       10, "Inteira", 30);
    part2.imprimir();

    part1.setId(20);
    //part1.Tipoing::setId(1);
    part1.setIdIng(1);
    part1.setNome("Alex");
    part1.setEvento("Oracle");
    part1.setDescricao("Professor");
    part1.setValor(0);
    part1.imprimir();


    cout << endl << part2.getNome() << " participou do evento "
         << part2.getEvento() << " com ingresso "
         << part2.getDescricao() << " no valor de R$"
         << part2.getValor() << endl;

    float vlIng = part2.getValor();
    vlIng = vlIng / 3;
    part2.setValor(vlIng);
    part2.imprimir();


}






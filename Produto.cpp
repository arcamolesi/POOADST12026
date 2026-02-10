//Produto.cpp
//Programa principal para manipular a Classe Produto
#include <iostream>
using namespace std;

#include "Produto.h"

// antivirus maquinas lab hub

int main(){
     Produto prod1; //instanciação do obj prod1 do tipo abstrato (classe) produto
     prod1.ler();
     prod1.imprimir(); //invocação método

     prod1.aumentar();
     prod1.imprimir();

     prod1.aumentar();
     prod1.imprimir();


     //Produto prod2;
     //prod2.ler();
     //prod2.imprimir();



}

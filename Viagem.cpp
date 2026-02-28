//Viagem.cpp
#include <iostream>
using namespace std;
#include "Viagem.h"

int main (){
    Viagem v1;
    v1.imprimir();
    Viagem v2;

   Viagem v3(10, "Assis/SP", 3, 54278.8, 54760.4);
   v3.imprimir();

   Viagem v5 (12, 2, "Assis/Marilia", 54278.8, 54760.4);
   v5.imprimir();

   Viagem v4 (12, "Assis/Bauru", 1, 63127);
   v4.imprimir();

   //v4.kmChegada = -5000;
   //não permite alterar, pois o atributo está encapsulado

   v4.setKmChegada(-5000);
   v4.imprimir();

   cout << "\nDescricao da viagem v4: " << v4.getDescricao() << endl;
   cout << "\nTipo de Combustível de v4: " << v4.getTipoComb() << " - "
                                        << v4.getDescTipoComb() << endl;

   cout << "\nDistancia v5: " << v5.getDistancia() << endl;

   Viagem v6(-8,"Assis/CM", 9, -3454, -43435);
   v6.imprimir();

}

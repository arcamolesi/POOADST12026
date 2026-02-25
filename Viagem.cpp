//Viagem.cpp
#include <iostream>
#include <iomanip>
using namespace std;
#include "Viagem.h"

int main () {
  cout << fixed << setprecision(2);
  Viagem v1; //instanciação do objeto
  v1.imprimir(); // invocação do método imprimir para v1

  //Viagem v2;
  //v2.imprimir();

  Viagem v2(10, "Assis/SP", 3, 87345.7, 87800);
  v2.imprimir();

  Viagem v3(12, "Assis/Bauru", 1, 45710.7);
  v3.imprimir();

  //não pode, pois atributos encapsulados
  //cout << "Chegada: " << v3.kmChegada << endl;

  cout << "Km Chegada de v3:" << v3.getKmChegada() << endl;
  cout << "Distancia viagem v3: " << v3.getDistancia() << endl;
  cout << "Combustive viagem v2: " << v2.getTipoComb() << " - "
                                   << v2.getNomeComb() << endl;
   v3.setId(-2343);


  v3.setKmChegada((float)50000);
  v3.imprimir();

  Viagem v4 (-5687, "Palmital-Ourinhos", 8, -87633.6, -90000 );
  v4.imprimir();


}



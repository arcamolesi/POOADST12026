//Equipe.cpp
#include <iostream>
using namespace std;
#include "Cargo.h"
#include "Func.h"

int main(){
   Cargo c1;
   c1.imprimir();

   Cargo c2(5, "Professor");
   c2.imprimir();

   cout << "\nImprimir Funcionarios\n";
   Funcionario f1;
   f1.imprimir();

   Funcionario f2(3, "Begosso", 15000, Cargo(5, "Diretor TI"));
   f2.imprimir();

   f2.aumento(); //aumento padrão
   f2.imprimir();

   int percent;
   cout << "\nInforme Percentual de aumento: ";
   cin >> percent;
   f2.aumento(percent); //aumento por percentual
   f2.imprimir();

   //f2.aumento(3000.f);
   f2.aumento((float)3000);
   f2.imprimir();


}

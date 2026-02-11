//Funcionario.cpp
#include <iostream>
using namespace std;

#include "Funcionario.h"

int main () {
   Funcionario func1;
   func1.ler();
   func1.imprimir();

   /* o trecho abaixo infringe a regra do encapsulamento
      pois tem acesso direto aos valores dos atributos
      que foram encapsulados usando o modificador "private"
   cout << "Informe nome do func1: ";
   cin >> func1.nome;
   cout << "Nome func1: " << func1.nome;
   */


   cout << "\nNome do funcionario func1: " << func1.getNome() << endl;
   cout << "\nSalario func1: " << func1.getSalario() << endl;

   cout << "\nInforme novo id func1: ";
   func1.setId(789);
   func1.setSalario(30);
   func1.imprimir();

   func1.setSalario(30000);
   func1.imprimir();

   func1.setSalario(15000);
   func1.imprimir();


}

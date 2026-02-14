//Funcionario.cpp
#include <iostream>
#include <stdio.h>
using namespace std;

#include "Funcionario.h"

int main () {
   Funcionario func1;
   func1.ler();
   func1.imprimir();

    //infringindo a regra do encapsulamento
   //cout << "Nome func1: " << func1.nome << endl;
   //func1.salario = 5000;
  // cout << "Salario func1: " << func1.salario << endl;

  cout << "\nNome func1: " << func1.getNome() << endl;

  func1.setId(45);
  cout << "\nID func1: " << func1.getId() << endl ;

  func1.setSalario(10001);
  cout << "Salario func1: " << func1.getSalario() << endl;

  func1.setSalario(4000);
  cout << "Salario func1: " << func1.getSalario() << endl;

  func1.setSalario(200);
  cout << "Salario func1: " << func1.getSalario() << endl;
}

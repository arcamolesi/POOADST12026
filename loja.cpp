//Loja.cpp
#include <iostream>
using namespace std;
#include "Categoria.h"
#include "Produto.h"

int main(){
    Categoria cat1;
    cat1.imprimir();

    Categoria cat2(20, "Frutas");
    cat2.imprimir();

    cat1.setId(10);
    cat1.setDescricao("Verduras");
    cat1.imprimir();

    Produto prod1;
    prod1.imprimir();

    Produto prod2(2, "Manga", cat2, 10.8, 8.9);
    prod2.imprimir();

    Produto prod3(3, "Banana", cat2, 50, 6.5);
    prod3.imprimir();

    Produto prod4(4, "Alface", cat1, 30, 2.32);
    prod4.imprimir();

}





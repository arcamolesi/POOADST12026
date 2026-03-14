//Loja.cpp
#include <iostream>
using namespace std;
#include "Categoria.h"
#include "Produto.h"
#include "ProdutoGen.h"

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

    cout << "\nDescricao prod4: " << prod4.getDescricao() << endl;
    cout << "Valor prod3: " << prod3.getValor() << endl;
    cout << "Desc cat prod2: " << prod2.getCategoria().getDescricao() << endl;

    prod1.setId(1);
    prod1.setDescricao("Tomate");

    //Categoria cat3 (30, "Legumes");
    //prod1.setCategoria(cat3);

    prod1.setCategoria(Categoria(30,"Legumes"));

    prod1.setQuantidade(30);
    prod1.setValor(7.65);

    prod1.imprimir();

    cout << "\nAlteracao de descricao de categoria para 'teste'\n";
    prod1.getCategoria().setDescricao("Teste");
    // não altera o objeto categoria em prod1, mas sim o que foi retornado
    prod1.imprimir();

    cout << "\nalteracao de descricao que funciona\n";
    // uma forma para realizar a operação é criar metodos usando ponteiros
    // a forma aconselha é a abaixo
    Categoria aux = prod1.getCategoria();
    aux.setDescricao("Teste");
    prod1.setCategoria(aux);

    prod1.imprimir();

    Produto prod5(5, "Suco Laranja", Categoria(40, "Sucos"), 50, 6);
    prod5.imprimir();


    ProdutoGen pgen1;
    pgen1.imprimir();

    ProdutoGen pgen2(1, "Abacate", 10, 6, Categoria(50, "Teste"));
    pgen2.imprimir();

}





//Produto.h
class Produto: Categoria {
  private:
    int id;
    string descricao;
    Categoria categoria;
    float quantidade;
    float valor;

  public:
    Produto();
    Produto(int, string, Categoria, float, float);

    void imprimir();

};

Produto::Produto() {
   this->id = 0;
   this->descricao = "";
   this->categoria = Categoria();
   this->quantidade = 0;
   this->valor = 0;
}

Produto::Produto(int id, string desc, Categoria cat, float qtde, float val){
   this->id = id;
   this->descricao = desc;
   this->categoria = cat;
   this->quantidade = qtde;
   this->valor = val;
}





void Produto::imprimir(){
   cout << "\nImprimir Produto\n";
   cout << "ID Produto: " << this->id << endl;
   cout << "Descricao Produto: " << this->descricao << endl;
   cout << "Id Cat: " << this->categoria.getId() << endl;
   cout << "Descricao Cat: " << this->categoria.getDescricao() << endl;
   cout << "Quantidade: " << this->quantidade << endl;
   cout << "Valor: " << this->valor << endl;
}








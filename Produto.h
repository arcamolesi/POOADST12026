//Produto.h
class Produto: Categoria {
  private:
    int id;
    string descricao;
    Categoria categoria;
    float quantidade;
    float valor;

  public:
    //construtores
    Produto();
    Produto(int, string, Categoria, float, float);

    //gets
    int getId() {return this->id;}
    string getDescricao() {return this->descricao;}
    Categoria getCategoria() {return this->categoria;}
    float getQuantidade() {return this->quantidade;}
    float getValor() {return this->valor;}

    //sets
    void setId(int id) {this->id = id;}
    void setDescricao(string desc) {this->descricao = desc;}
    void setCategoria(Categoria cat) {this->categoria = cat;}
    void setQuantidade(float qtde) {this->quantidade = quantidade;}
    void setValor(float val) {this->valor = val;}

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








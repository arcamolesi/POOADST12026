//ProdutoGen.h
class ProdutoGen: public Categoria {
  private:
    int id;
    string descricao;
    float quantidade;
    float valor;
  public:
    ProdutoGen(): id(0), descricao(""), quantidade(0), valor(0), Categoria(){ }
    ProdutoGen(int id, string desc, float qtde, float val, Categoria cat): id(id), descricao(desc), quantidade(qtde), valor(val), Categoria(cat) { }


    void imprimir();


};




void ProdutoGen::imprimir(){
   cout << "\nImprimir Produto\n";
   cout << "ID Produto: " << this->id << endl;
   cout << "Descricao Produto: " << this->descricao << endl;
   cout << "Id Cat: " << this->Categoria::id << endl;
   cout << "Descricao Cat: " << this->Categoria::descricao << endl;
   cout << "Quantidade: " << this->quantidade << endl;
   cout << "Valor: " << this->valor << endl;
}

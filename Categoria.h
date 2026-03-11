//Categoria.h
class Categoria{
  private:
    int id;
    string descricao;

  public:
    //construtores
    Categoria(): id(0), descricao("") { }
    Categoria(int id, string desc): id(id), descricao(desc){}

    //gets
    int getId() {return this->id;}
    string getDescricao() {return this->descricao;}

    //sets
    void setId(int id) {this->id = id;}
    void setDescricao(string desc) {this->descricao = desc;}

    //outros métodos
    void imprimir();
};


void Categoria::imprimir(){
   cout << "\nImprimir Categoria\n";
   cout << "ID: " << this->id << endl;
   cout << "Descricao: " << this->descricao << endl;

}





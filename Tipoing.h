//Tipoing.h
class Tipoing{
   protected: //atributos
    int id;
    string descricao;
    float valor;

   public: //métodos
       //Tipoing();
       //construtor padrão inline
       Tipoing(): id(0), descricao("Ingresso Padrao"), valor(0.0) {}

       //construtor parametrizado ou com argumentos inline
       Tipoing(int id, string desc, float valor):
               id(id), descricao(desc), valor(valor) {}

       //métodos de acesso - get
       int getId() {return this->id;}
       string getDescricao() {return this->descricao; }
       float getValor() {return this->valor;}

       //métodos de alteração de atributos - set
       void setId(int id) {this->id = id;}
       void setDescricao(string desc) {this->descricao = desc;}
       void setValor (float valor) {(valor>0)? this->valor = valor: this->valor=0;}
       /*{ //acima usou operador ternário para a condicional
          if (valor>0)
              this->valor = valor;
          else this->valor = 0;
       */

       //outros métodos
       void imprimir();

};

void  Tipoing::imprimir(){
    cout << "\nImprimir Tipo Ingresso\n";
    cout << "ID: " << getId() << endl; // this->id
    cout << "Descricao: " << this->descricao << endl;
    cout << "Valor: " << this->valor << endl;
}



/*
Tipoing:Tipoing() {
   this->id = 0;
   this->descricao = "Ingresso Padrao";
   this->valor = 0.0;
}*/

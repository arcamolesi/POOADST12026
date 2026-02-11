//Funcionario.h

class Funcionario{
    //atributos
    private:
      int id;
      string nome;
      float salario;

    //métodos
    public:
      void ler(); //protótipo do método ler
      void imprimir();  //protótipo do método imprimir

      //métodos de acesso aos valores dos atributos - geters
      //int getId() { return id;}
      int getId();
      string getNome() {return this->nome;}
      float getSalario() {return this->salario;}

      //métodos de alteração dos valores dos atributos - seters
      void setId(int id) {
        this->id = id;
      }

      void setNome (string nome){
         this->nome = nome;
      }

      void setSalario(float salario){
          //this->salario = salario;
          if (salario >=1500 && salario < 20000){
            this->salario = salario;
          }
          else { this->salario = 1500;}
      }

};

void Funcionario::ler(){
    cout << "\nLer Dados de funcionario\n";
    cout << "Informe ID: ";
    cin >> id;
    cout << "Informe nome: ";
    cin >> nome;
    cout << "Informe salario: ";
    cin >> salario;
}


void Funcionario::imprimir(){
   cout << "\nImprimir Funcionario\n";
   cout << "ID: " << getId() << endl;
   cout << "Nome: " << nome << endl;
   cout << "Salario: " << salario << endl;
}

int Funcionario::getId(){
   return this->id;
}



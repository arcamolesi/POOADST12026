//Funcionario.h
class Funcionario{

  //atributos
   private:
     int id;
     string nome;
     float salario;

  //métodos
   public:
     void ler();  //protótipo do método ler
     void imprimir();  //protótipo do método imprimir

     //métodos geters - permite Acesso aos dados
     int getId() {return this->id;}
     string getNome() {return this->nome;}
     float getSalario() {return this->salario;}

     //métodos seters - alterar valor dos atributos
     void setId(int id) {
         this->id = id;
     }

     void setNome(string nome){
         this->nome = nome;
     }

     void setSalario(float salario){
         if(salario <=1500 || salario > 10000)
            this->salario = 1500;
         else this->salario = salario;

     }

};

void Funcionario::ler(){ //corpo do método ler()
   cout << "\nLeitura Dados Funcionario\n";
   cout << "Informe ID: ";
   cin >> id;
   cin.ignore();
   cout << "Informe Nome: ";
   getline (cin, nome);  //cin >> nome;
   cout << "Informe Salario: ";
   cin >> salario;
}

void Funcionario::imprimir(){
   cout << "\nImprimir Funcionario\n";
   cout << "ID: " << id << endl;
   cout << "Nome: " << nome << endl;
   cout << "Salario: " << salario << endl;
}



//Func.h
class Funcionario: public Cargo{
    private:
      int id;
      string nome;
      float salario;

    public:
      Funcionario(): id(0), nome(""), salario(0), Cargo() {}
      Funcionario(int id, string nome, float sal, Cargo cargo):
         id(id), nome(nome), salario(sal), Cargo(cargo) {}

      int getId () {return this->id;}
      string getNome() {return this->nome;}
      float getSalario() {return this->salario;}

      void setId(int id) {this->id = id;}
      void setNome(string nome) {this->nome = nome;}
      void setSalario(float sal) {this->salario = sal;}

      void aumento() {this->salario = this->salario + (this->salario * 20 /100); }
      void aumento(int perc) {this->salario = this->salario + (this->salario * perc / 100);}
      void aumento(float valor) {this->salario = this->salario + valor;}

    void imprimir(){
        cout << "\nImprimir Funcionario\n";
        cout << "ID Funcionario: " << this->id << endl;
        cout << "Nome: " << this->nome << endl;
        cout << "Cargo: " << Cargo::id  << " - " << Cargo::cargo << endl;
        cout << "Salario: " << this->salario << endl;
    }

};

//Participante.h
class Participante: public Tipoing {
    private: //atributos
      int id;
      string nome;
      string evento;

    public: // métodos
        //construtores
        Participante();
        Participante(int, string, string, int, string, float);

        //gets
        int getId() {return this->id;}
        string getNome() {return this->nome;}
        string getEvento() {return this->evento;}
        int getIdIng() {return Tipoing::id;}

        //sets
        void setId(int id) {this->id = id;}
        void setNome (string nome) {this->nome = nome;}
        void setEvento (string evento) {this->evento = evento;}
        void setIdIng(int id) {Tipoing::id = id;}

       //outros métodos
       void imprimir();
};

Participante::Participante(){
   this->id = 0;
   this->nome = "";
   this->evento = "";
   Tipoing::id = 0;
   Tipoing::setDescricao(""); //Tipoing::descricao
   this->valor = 0;
}

Participante::Participante(int id, string nome, string evento, int idIng, string desc, float valor){
     this->id = id;
     this->nome = nome;
     this->evento = evento;
     Tipoing::id = idIng;
     this->descricao = desc; // Tipoing::descricao = desc; // Tipoing.setDescricao(desc)
     this->valor = valor;
}


void Participante::imprimir(){
   cout << "\nImprimir Parcipante\n";
   cout << "ID: " << this->id << endl;
   cout << "Nome: " << this->nome << endl;
   cout << "Evento: " << this->evento << endl;
   cout << "ID Tipo Ingresso: " << Tipoing::id << endl; // Tipoing::getId()
   cout << "Descricao Ingresso: " << this->descricao << endl;
   cout << "Valor Ingresso: " << this->valor << endl;
}




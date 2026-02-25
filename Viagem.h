//Viagem.h
class Viagem {
    private:  //atributos
      int id;
      string descricao;
      int tipoComb; //1-Gas, 2-Diesel, 3-Etanol
      float kmSaida;
      float kmChegada;

    public: //métodos
     Viagem(); // protótipo do construtor padrão

      //protótipo construtor parametrizado ou com argumentos
     Viagem (int, string, int, float, float);
     Viagem (int, string, int, float);
     ~Viagem();

     //void setKmChegada(float chegada) {this->kmChegada = chegada;}

     //métodos de acesso - gets
     int getId() {return this->id;}
     string getDescricao() {return this->descricao;}
     int getTipoComb() {return this->tipoComb;}
     float getKmSaida() {return this->kmSaida;}
     float getKmChegada() {return this->kmChegada;}
     float getDistancia(); //protótipo ou assinatura do getDistancia
     string getNomeComb();

     //métodos de modificação (alteração) de valores - seters
     void setId(int);
     void setDescricao(string);
     void setTipoComb(int);
     void setKmSaida(float);
     void setKmChegada(float);

      void imprimir();

};

//implementação dos construtores

Viagem::Viagem(){ //construtor padrão
    cout << "\npassei pelo construtor padrão\n";
    this->id = 0;
    this->descricao = "Viagem Padrao";
    this->tipoComb = 0;
    this->kmSaida = 0; // este campo armazena o valor do km de saida
    this->kmChegada = 0;
}

Viagem::Viagem(int id, string desc, int tipo, float saida, float chegada){
    setId(id);//this->id = id;
    setDescricao(desc); //this->descricao = desc;
    setTipoComb(tipo); //this->tipoComb = tipo;
    setKmSaida(saida); //this->kmSaida = saida;
    setKmChegada(chegada); //this->kmChegada =chegada;
}


Viagem::Viagem(int id, string desc, int tipo, float saida){
    this->id = id;
    this->descricao = desc;
    this->tipoComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = 0;
}

Viagem::~Viagem(){
  cout << "\nObjeto destruido com sucesso, memória liberada...\n";
}

//implementação dos geters

float Viagem::getDistancia(){
   float dist;
   //dist = (this->kmChegada - this->kmSaida);
   dist = getKmChegada() - getKmSaida();
   return dist;
}

string Viagem::getNomeComb(){
    string combustivel="Nao definido";

    if (this->tipoComb==1)
       combustivel = "Gasolina";
    else if (this->tipoComb==2)
            combustivel = "Diesel";
         else if (this->tipoComb == 3)
               combustivel = "Etanol";
    return combustivel;
}

//implementação dos seters
void Viagem::setId(int id){
  if (id >0 && id < 1000000)
    this->id = id;
  else { cout << "\n ID invalido: " << id << endl;
         this->id = 0;
       }
}

void Viagem::setDescricao(string desc){
   this->descricao = desc;
}

void Viagem::setTipoComb(int tipo){
   if (tipo>0 && tipo <4)
      this->tipoComb = tipo;
   else {cout << "\nTipo combustivel invalido: " << tipo << endl;
          this->tipoComb = 0;
        }
}

void Viagem::setKmSaida(float saida){
   if (saida>0)
       this->kmSaida = saida;
       else this->kmSaida = 0;
}

void Viagem::setKmChegada(float chegada){
  if (chegada==0 || chegada > this->kmSaida)
     this->kmChegada = chegada;
  else cout << "\nChegada menor que saida: " << chegada << endl;
}

void Viagem::imprimir(){
   cout << "\nImprimir Viagem\n";
   cout << "ID: " << this->id << endl;
   cout << "Descricao: " << this->descricao << endl;

   //cout << "Tipo Combustivel: " << this->tipoComb << endl;
   cout << "Tipo Combustivel: " << getTipoComb() << " - "
                                << getNomeComb() << endl;

   cout << "Km de Saida: " << this->kmSaida << endl;
   cout << "Km de Chegada: " << this->kmChegada << endl;
}







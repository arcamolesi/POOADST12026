//Viagem.h

class Viagem{
   private: //atributos
     int id;
     string descricao;
     int tipoComb; //1-Gas, 2-Diesel, 3-Etanol
     float kmSaida;
     float kmChegada;

   public: //
     Viagem(); // protótipo do método Construtor padrão para Viagem

     //protótipo do construtor parametrizado para Viagem
     Viagem(int, string, int, float, float);
     Viagem(int, int, string,  float, float);
     Viagem(int, string, int, float);

     //métodos para acesso aos valores dos atributos - geters
     int getId() {return this->id;}
     string getDescricao() {return this->descricao;}
     int getTipoComb() {return this->tipoComb;}
     float getKmSaida() {return this->kmSaida;}
     float getKmChegada() {return this->kmChegada;}
     string getDescTipoComb();
     float getDistancia();


     //métodos de alteração/modificação - seters
     void setId(int);
     void setDescricao(string);
     void setTipoComb(int);
     void setKmSaida(float);
     void setKmChegada(float);  //assinatura ou protótipo método setKmChegada

     void imprimir();
};

//implementação dos construtores

Viagem::Viagem () { //construtor padrão
   //cout << "\nPassei no construtor padrao\n";
   this->id = 0;
   this->descricao = "Viagem Padrao";
   this->tipoComb = 0;
   this->kmSaida = 0;
   this->kmChegada = 0;
}

Viagem::Viagem(int id, string desc, int tipo, float saida, float chegada){
    setId(id); // this->id = id;
    setDescricao(desc); //this->descricao = desc;
    setTipoComb(tipo); // this->tipoComb = tipo;
    setKmSaida(saida); //this->kmSaida = saida;
    setKmChegada(chegada); //this->kmChegada = chegada;
}

Viagem::Viagem(int id,  int tipo, string desc, float saida, float chegada){
    this->id = id;
    this->descricao = desc;
    this->tipoComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = chegada;
}

Viagem::Viagem(int id, string desc, int tipo, float saida){
    this->id = id;
    this->descricao = desc;
    this->tipoComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = 0;
}

//implementação métodos geters
string Viagem::getDescTipoComb(){
   string desc;
   if (this->tipoComb == 1)
        desc = "Gasolina";
  else if (this->tipoComb == 2)
          desc = "Diesel";
       else if (this->tipoComb == 3)
                desc = "Etanol";
            else desc = "tipo combustivel não informado";

     return desc;
}

float Viagem::getDistancia(){
   float distancia = (this->kmChegada - this->kmSaida);
   return distancia;
}

//implementação dos métodos seters
void Viagem::setId(int id){
    if (id > 0)
        this->id = id;
    else { this->id = 0;
           cout << "\nValor de id invalido...\n";
         }
}

void Viagem::setDescricao (string descricao){
    this->descricao = descricao;
}

void Viagem::setTipoComb(int tipo){
    if (tipo > 0 && tipo < 4)
        this->tipoComb = tipo;
    else this->tipoComb = 0;
}

void Viagem::setKmSaida(float saida){
   if (saida>0)
    this->kmSaida = saida;
   else this->kmSaida = 0;
}

void Viagem::setKmChegada(float chegada){
   if (chegada > this->kmSaida)
       this->kmChegada = chegada;
   else { this->kmChegada = 0;
          cout << "\nKm Chegada tem que ser maior que a saida\n";
        }
}



void Viagem::imprimir(){
    cout << "\nImprimir Viagem\n";
    cout << "ID: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Tipo Combustivel: " << this->tipoComb << " - "
                                 << this->getDescTipoComb() << endl;
    cout << "Km de Saida: " << this->kmSaida << endl;
    cout << "Km de Chegada: " << this->kmChegada << endl;
}





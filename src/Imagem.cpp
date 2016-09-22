#include < iostream >
#include < string >
#include < fstream >

  #include "../inc/Imagem.hpp"

using namespace std;

Imagem::Imagem(string imagemFile){

ppmOriginal = "doc/"+ imagemFile+".ppm";
ler.open(ppmOriginal.c_str());

    while(!ler.is_open()){
      cout << "O arquivo não foi encontrado. Por favor entre com o arquivo '.ppm'valido"
      cin >> ppmOriginal;

      ppmOriginal= "doc/"+ppmOriginal+".ppm";
      ler.open(ppmOriginal.c_str());

    } lerCabecalho();
        while (num_Magico != "P3" && num_Magico !="P3"){
          cout << "Imagens do tipo incorreto: ";
          cin >> ppmOriginal;
          ppmOriginal = "doc/"+ ppmOriginal+ ".ppm";
          ler.open(ppmOriginal.c_str());
            lerCabecalho();

        }lerPixel();}

void Imagem::lerPixel(){
  char px;
  int x;
  int z;

    for(x=0; x< largura; x++){
        for(z=0; z< altura; z++){
          ler.get(px);
          pixel[x][z][1]=(unsigned char) px;

ler.get(px);
  pixel[x][z][2]=(unsigned char) px;
ler.get(px);
  pixel[x][z][3]=(unsigned char) px;

        }
    }
}
void Imagem::escreverPixel(string copiaImagem){
  int x;
  int z;

  ppmCopia = "doc/"+copiaImagem+".ppm";
    escrever.open(ppmCopia.c_str());
    escrever<< num_Magico << endl;
    escrever<< altura<<"   "<< largura<< endl;
    escrever << corTotal << endl;

for(i=0; i< largura; i++){
  for(j=0; j < altura; j++){
    escrever << pixel [x][z][1];
    escrever << pixel [x][z][2];
    escrever << pixel [x][z][3];
        }
    }
}
void Imagem::lerCabecalho(){
  string cabecalho;
  int informacoes = 0;
  ifstream aux(ppmOriginal.c_str());

  getline(ler, cabecalho);
    while(cabecalho != "255"){
      if(cabecalho[0] != '#'){
        if(informacoes ==0)
        aux >> num_Magico;
        if (informacoes ==1)
        { aux >> altura;
          aux >> largura;}
            informacoes++;
          }

  getline(aux, cabecalho);
  getline(ler, cabecalho);
  }
corTotal= 255;

}
Imagem::~Imagem(){
                    }
string Imagem::getNum_Magico(){
    return num_Magico;
  }
void Imagem::setNum_Magico(string num_Magico){
  this-> num_Magico = num_Magico;
  }

      int Imagem::getAltura(){
      return altura;
      }
      void Imagem::setAltura(int altura){
      this-> altura = altura;
      }

          int Imagem::getLargura(){
          return largura;
          }
          void Imagem::setLargura(int largura){
            this-> largura = largura;
          }

              int Imagem::getCorTotal(){
                return corTotal;
              }
              void Imagem::setCotTotal(int corTotal){
                this-> corTotal = corTotal;
              }

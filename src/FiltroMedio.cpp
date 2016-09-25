#include "../inc/FiltroMedio.hpp"
FiltroMedio::FiltroMedio(){
}FiltroMedio::~FiltroMedio(){}

void FiltroMedio::aplicarFiltros(Imagem &img,int Tamanho){

Imagem* imagem = &img;
unsigned char filtros
[1000][1000][3];

  int x,z;
  for(x=0;x<= imagem->getLargura();x++){
      for(z=0;z<=imagem->getAltura();z++){
        filtros[x][z][1]= imagem->pixel[x][z][1];
        filtros[x][z][2]= imagem->pixel[x][z][2];
        filtros[x][z][3]= imagem->pixel[x][z][3];
      }
  }
int i,j;
int limite;

int proximo;

limite=Tamanho/2;
  for(x=limite;x< imagem->getLargura();++x){
    for(z=limite;z < imagem->getAltura();++z){
    int   valor[4]={0};

if(Tamanho==3)proximo =1;
if(Tamanho==5)proximo =2;
if(Tamanho==7)proximo =3;
    for(i=(-1)*proximo; i<= proximo;i++){
      for(j=(-1)*proximo;j<=proximo;j++){
          valor[1] +=filtros[x+i][z+j][1];
          valor[2] +=filtros[x+i][z+j][2];
          valor[3] +=filtros[x+i][z+j][3];

      }

    }

valor[1] /=Tamanho * Tamanho;
valor[2] /=Tamanho * Tamanho;
valor[3] /=Tamanho * Tamanho;
  imagem->pixel[x][z][1]= (unsigned char) valor[1];
  imagem->pixel[x][z][2]= (unsigned char) valor[2];
  imagem->pixel[x][z][3]= (unsigned char) valor[3];
      }

    }

}

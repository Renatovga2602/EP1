#include "../inc/FiltroNegativo.hpp"
#include < iostream >

FiltroNegativo::FiltroNegativo(){
}
FiltroNegativo::~FiltroNegativo(){

}void FiltroNegativo::aplicarFiltros(Imagem &img){
  int x;
  int z;
  Imagem* imagem = &img;
    for(x=0;x < imagem->getLargura();x++){
      for(z=0;z < imagem->getAltura();z++){
          imagem->pixel[x][z][1] = imagem->getCorTotal() - imagem->pixel[x][z][1];
            imagem->pixel[x][z][2] = imagem->getCorTotal() - imagem->pixel[x][z][2];
              imagem->pixel[x][z][3] = imagem->getCorTotal() - imagem->pixel[x][z][3];
          }

      }



}

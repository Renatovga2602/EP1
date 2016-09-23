#include "../inc/Filtros.hpp"
#include <iostream>
using namespace std;

Filtros::Filtros(){
}Filtros::~Filtros(){
}
void Filtros::aplicarFiltros(Imagem & image){
  int x;
  int z;
  Imagem *imagem = &image;
  for(x=0; x <imagem->getLargura(); x++){
    for(z=0; z <imagem->getAltura(); z++){
      imagem->pixel[x][z][1]= imagem->getCorTotal() - imagem->pixel[x][z][1];
      imagem->pixel[x][z][2]= imagem->getCorTotal() - imagem->pixel[x][z][2];
      imagem->pixel[x][z][3]= imagem->getCorTotal() - imagem->pixel[x][z][3];
    }


  }


}

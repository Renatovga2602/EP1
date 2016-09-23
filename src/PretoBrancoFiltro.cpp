#include "../inc/PretoBrancoFiltro.hpp"
#include <iostream>

PretoBrancoFiltro::PretoBrancoFiltro(){
}
PretoBrancoFiltro::~PretoBrancoFiltro(){
}
void PretoBrancoFiltro::aplicarFiltros(Imagem & img)
{
      int x, z;
      Imagem* imagem = &img;
      for(x= 0; x < imagem->getLargura(); ++x){
        for(z= 0; z < imagem->getAltura(); ++z){
          int cinza_calcula_valor = (0.299 * imagem->pixel[x][z][1]) + (0.587 * imagem->pixel[x][z][2])+(0.144 * imagem->pixel[x][z][3]);

if(cinza_calcula_valor <=255){
            imagem->pixel[x][z][1]= cinza_calcula_valor;
            imagem->pixel[x][z][2]= cinza_calcula_valor;
            imagem->pixel[x][z][3]= cinza_calcula_valor;
            }
else{
imagem->pixel[x][z][1]=imagem->getCorTotal();
imagem->pixel[x][z][2]=imagem->getCorTotal();
  imagem->pixel[x][z][3]=imagem->getCorTotal();
}
      }
    }
}

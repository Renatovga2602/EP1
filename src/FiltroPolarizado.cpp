#include "../inc/FiltroPolarizado.hpp"
#include <iostream>

FiltroPolarizado::FiltroPolarizado(){
}
FiltroPolarizado::~FiltroPolarizado(){
}
void FiltroPolarizado::aplicarFiltros(Imagem &img){
  Imagem* imagem = &img;
  int x;
  int z;

    for(x=0;x<imagem->getLargura(); ++x){
      for (z=0; z < imagem->getAltura(); ++z){
          if (imagem->pixel[x][z][1] < imagem->getCorTotal()/2){
              imagem->pixel[x][z][1] = 0;


}
else
{
            imagem->pixel[x][z][1] = imagem->getCorTotal();
            }

if(imagem->pixel[x][z][2] < imagem->getCorTotal()/2){

 	               imagem->pixel[x][z][2] = 0;

}else{

 	               imagem->pixel[x][z][2] = imagem->getCorTotal();

 	           }

 	           if(imagem->pixel[x][z][3] < imagem->getCorTotal()/2){

 	               imagem->pixel[x][z][3] = 0;

}else{

 	               imagem->pixel[x][z][3] = imagem->getCorTotal();
 	           }
 	    }
 }


 }

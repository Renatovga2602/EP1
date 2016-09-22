#include "../inc/FiltroPolarizado.hpp"
#include < iostream >

FiltroPolarizado::FiltroPolarizado(){
}
FiltroPolarizado::~FiltroPolarizado(){
}
void FiltroPolarizado::aplicarFiltros(Imagem &img){
  Imagem* imagem = &img;
  int x;
  int z;

    for(x=0;x<imagem->getLargura(); ++x){
      for (z=0; z<imagem->getAltura(); ++z){
          if (imagem->pixel[x][z][1]) < imagem->getCorTotal()/2){
              imagem->pixel[x][z][1] = 0;


}else{
            imagem->pixel[x][z][1] = imagem->getCorTotal();
            }

if(image->pixel[i][j][2] < image->getMaxColor()/2){

 	               image->pixel[i][j][2] = 0;

}else{

 	               image->pixel[i][j][2] = image->getMaxColor();

 	           }

 	           if(image->pixel[i][j][3] < image->getMaxColor()/2){

 	               image->pixel[i][j][3] = 0;
 	           
}else{

 	               image->pixel[i][j][3] = image->getMaxColor();
 	           }
 	    }
 }


 }

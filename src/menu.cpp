#include "../inc/Imagem.hpp"
#include "../inc/FiltroNegativo.hpp"
#include "../inc/FiltroPolarizado.hpp"
#include "../inc/PretoBrancoFiltro.hpp"


string imagemFile,  imagemCopia;
Imagem* imagem;

int main (){
  void aplicarFiltroNegativo();void aplicarFiltroPolarizado();void aplicarPretoBrancoFiltro();

  int menu;

  cout << "------------------------------------------------------------------------------\n" << endl;
  cout << "\t\t\t\v    FILTROS DE IMAGEM EP1    \v\t\t\n" << endl;
  cout << "------------------------------------------------------------------------------"<<endl;

  cout << "\n-> Seu arquivo .ppm deve estar na pasta /doc.\n"<< endl;
  cout << "\n-> Seu novo arquivo estara na pasta /doc.\n" << endl << endl;
  cout << "------------------------------------------------------------------------------"<<endl;

  cout << "\n-> Digite o nome do seu arquivo .ppm: "; cin >> imagemFile;
    cout<<"------------------------------------------------------------------------------"<< endl;
    imagem = new Imagem(imagemFile);

  cout << endl;
      cout << "\t\t\tEscolha o Filtro que ira usar: \n\n" <<endl;
        cout << "1-Filtro Negativo: (converte as cores positiva da imagem em negativas).\n\t"<<endl;
          cout << "2-Filtro Polarizado: (Permite mais nitidez e conforto visual da imagem).\n\t"<<endl;
            cout << "3-Filtro Preto e Branco: (tons de preto e branco).\t\n"<<endl;
              cin >> menu;
                cout << endl;

        switch (menu) {
          case 1:{
              cout << "Novo nome para a imagem: " <<endl;
                cin >> imagemCopia;
                  aplicarFiltroNegativo();
            break;
          }
          case 2:{
              cout << "Novo nome para a imagem: " <<endl;
                cin >> imagemCopia;
                  aplicarFiltroPolarizado();
            break;

          }
          case 3:{
            cout << "Novo nome para a imagem: " <<endl;
              cin >> imagemCopia;
                aplicarPretoBrancoFiltro();
          break;
        }
        default:
          cout << "\aValor digitado foi invalido" << endl;
            break;
}
  delete (imagem);
    return 0;
}

void aplicarFiltroNegativo(){

  FiltroNegativo fn;
  fn.aplicarFiltros(*imagem);
  cout<<imagem->escreverPixel(imagemCopia)
      <<endl;

}


void aplicarFiltroPolarizado(){

  FiltroPolarizado fp;
 	 fp.aplicarFiltros(*imagem);
 		 cout<<imagem->escreverPixel(imagemCopia)
     <<endl;

}
void aplicarPretoBrancoFiltro(){

  PretoBrancoFiltro fpb;
 	 fpb.aplicarFiltros(*imagem);
 		cout<<imagem->escreverPixel(imagemCopia)<< endl;

}

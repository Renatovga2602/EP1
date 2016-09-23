#include "../inc/Imagem.hpp"
#include "../inc/FiltroNegativo.hpp"
#include "../inc/FiltroPolarizado.hpp"
#include "../inc/PretoBrancoFiltro.hpp"


string imagemFile,  imagemCopia;
Imagem* imagem;

int main (){
  void aplicarFiltroNegativo();void aplicarFiltroPolarizado();void aplicarPretoBrancoFiltro();

  int menu;
  cout << "***************************\n" << endl;
  cout << "\n\t\t|    Filtros EP1    |\n" << endl;
  cout << "***************************"<<endl;
  cout << "\n\t\tPrimeiro: Seu arquivo .ppm deve estar na pasta /doc\n"<< endl;
  cout << "\n\t\tSegundo: Seu novo arquivo estara na pasta /doc\n" << endl << endl;

  cout << "\t\tDigite o nome da seu arquivo .ppm\n"; cin >> imagemFile;
    imagem = new Imagem(imagemFile);

  cout << endl;
      cout << "Escolha o Filtro que ira usar: " <<endl;
        cout << "1-Filtro Negativo"<<endl;
          cout << "2-Filtro Polarizado"<<endl;
            cout << "3-Filtro Preto e Branco"<<endl;
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
          cout << "Valor digitado foi invalido" << endl;
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

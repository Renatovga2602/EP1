#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include < iostream >
#include < fstream >
#include < string >

using namespace std;
  class Imagem {

    private:

      string num_Magico;
      int altura;
      int largura;
      int corTotal;
      string ppmOriginal;
      string ppmCopia;
        ifstream ler;
          ofstream escrever;

      void lerPixel();
        void lerCabecalho();

    public:

      Imagem(string imagemFile);
      ~Imagem();

      unsigned char pixel[1000][1000][3];

      void escreverPixel(string Copia);

        string getNum_Magico();
        void setNum_Magico(string num_Magico);

        int getAltura();
        void setAltura(int altura);

        int getLargura();
        void setLargura(int largura);

        int getCorTotal();
        void setCotTotal(int corTotal);
};
#endif

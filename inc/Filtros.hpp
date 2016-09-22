#ifndef FILTROS_HPP
#define FILTROS_HPP
#include "Imagem.hpp"

using namespace std;

class Filtros{

  public:
    Filtros();
    ~Filtros();

    void aplicarFiltros(Imagem & imagem);

};
#endif

#ifndef FILTROMEDIO_HPP
#define FILTROMEDIO_HPP
#include "Filtros.hpp"

class FiltroMedio : public Filtros{

public:
  FiltroMedio();~FiltroMedio();
  
  void aplicarFiltros(Imagem & img,int Tamanho);

};
#endif

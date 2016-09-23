#ifndef FILTRONEGATIVO_HPP
#define FILTRONEGATIVO_HPP
  #include "Filtros.hpp"

class FiltroNegativo : public Filtros{

public:
  FiltroNegativo();
  ~FiltroNegativo();
void aplicarFiltros(Imagem &imagem);

};

#endif

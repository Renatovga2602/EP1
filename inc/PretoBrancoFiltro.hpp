#ifndef PRETOBRANCOFILTRO_HPP
#define PRETOBRANCOFILTRO_HPP
#include "Filtros.hpp"

class PretoBrancoFiltro : public Filtros{
public:
  PretoBrancoFiltro();
  ~PretoBrancoFiltro();
  void aplicarFiltros(Imagem &imagem);
};
#endif

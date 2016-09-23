#ifndef FILTROPOLARIZADO_HPP
#define FILTROPOLARIZADO_HPP
  #include "Filtros.hpp"

class FiltroPolarizado :public Filtros{
public:
    FiltroPolarizado();
    ~FiltroPolarizado();
        void aplicarFiltros(Imagem &imagem);


};
#endif

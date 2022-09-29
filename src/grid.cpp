#include "grid.h"


grid::grid(double xmin_, double xmax_, int nx_, double ymin_, double ymax_, int ny_ , double etamin_, double etamax_, double neta_){
   xmin   = xmin_ ; 
   xmax   = xmax_ ; 
   nx     = nx_   ;
   ymin   = ymin_ ; 
   ymax   = ymax_ ; 
   ny     = ny_   ;
   etamin = etamin_ ; 
   etamax = etamax_ ; 
   neta   = neta_   ;

   Cell = new cell[nx * ny * neta];
    
}


grid::~grid(){
   delete[] Cell;  // free the RAM
}



cell* grid::get_cell(int ix, int iy, int ieta){

  // border cells next or prev are they themselves :)
  ix = ix > 0 ? ix : 0;
  ix = ix < nx ? ix : nx - 1;
  iy = iy > 0 ? iy : 0;
  iy = iy < ny ? iy : ny - 1;
  ieta = ieta > 0 ? ieta : 0;
  ieta = ieta < neta ? ieta : neta - 1;
  
  return &Cell[ix + nx * iy + nx * ny * ieta];
}



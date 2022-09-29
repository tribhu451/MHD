#include "grid.h"


grid::grid(double xmin_, double xmax_, int nx_, double ymin_, double ymax_, int ny_ , double zmin_, double zmax_, double nz_){
   xmin   = xmin_ ; 
   xmax   = xmax_ ; 
   nx     = nx_   ;
   ymin   = ymin_ ; 
   ymax   = ymax_ ; 
   ny     = ny_   ;
   zmin   = zmin_ ; 
   zmax   = zmax_ ; 
   nz     = nz_   ;

   Cell = new cell[nx * ny * nz];
    
}


grid::~grid(){
   delete[] Cell;  // free the RAM
}



cell* grid::get_cell(int ix, int iy, int iz){

  // border cells next or prev are they themselves :)
  ix = ix > 0 ? ix : 0;
  ix = ix < nx ? ix : nx - 1;
  iy = iy > 0 ? iy : 0;
  iy = iy < ny ? iy : ny - 1;
  iz = iz > 0 ? iz : 0;
  iz = iz < nz ? iz : nz - 1;
  
  return &Cell[ix + nx * iy + nx * ny * iz];
}



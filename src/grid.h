#pragma once
#include<iostream>
#include<cmath>
#include "cell.h" 



using namespace std;

class grid
{
  
  private:

    double xmin ; 
    double xmax ; 
    double ymin ; 
    double ymax ; 
    double zmin ; 
    double zmax ; 

    int nx ; 
    int ny ; 
    int nz ; 
    
    cell* Cell ; 

  public:

    grid(double xmin_, double xmax_, int nx_, double ymin_, double ymax_, int ny_ , double zmin_, double zmax_, double nz_);
    ~grid();

    inline int get_nx()   { return nx; }
    inline int get_ny()   { return ny; }
    inline int get_nz()   { return nz; }

    inline double get_dx()   { return (xmax - xmin)/(nx-1); }
    inline double get_dy()   { return (ymax - ymin)/(ny-1); }
    inline double get_dz()   { return (zmax - zmin)/(nz-1); }

    cell* get_cell(int ix, int iy, int iz);
    inline double get_cell_x_cordinate(int ix, int iy, int iz){ return xmin + ix * get_dx() ;  }
    inline double get_cell_y_cordinate(int ix, int iy, int iz){ return ymin + iy * get_dy() ;  }
    inline double get_cell_z_cordinate(int ix, int iy, int iz){ return zmin + iz * get_dz() ;  }

};






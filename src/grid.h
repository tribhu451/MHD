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
    double etamin ; 
    double etamax ; 

    int nx ; 
    int ny ; 
    int neta ; 
    
    cell* Cell ; 

  public:

    grid(double xmin_, double xmax_, int nx_, double ymin_, double ymax_, int ny_ , double etamin_, double etamax_, double neta_);
    ~grid();

    inline int get_nx()   { return nx; }
    inline int get_ny()   { return ny; }
    inline int get_neta() { return neta; }

    inline double get_dx()   { return (xmax - xmin)/(nx-1); }
    inline double get_dy()   { return (ymax - ymin)/(ny-1); }
    inline double get_deta() { return (etamax - etamin)/(neta-1); }

    cell* get_cell(int ix, int iy, int ieta);
    inline double get_cell_x_cordinate(int ix, int iy, int ieta){ return xmin + ix * get_dx() ;  }
    inline double get_cell_y_cordinate(int ix, int iy, int ieta){ return ymin + iy * get_dy() ;  }
    inline double get_cell_eta_cordinate(int ix, int iy, int ieta){ return etamin + ieta * get_deta() ;  }

};






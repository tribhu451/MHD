#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <chrono>
#include <cmath>
#include "cell.h"
#include "grid.h"
#include "init.h"

using std::cout;
using std::endl;
using namespace std::chrono;


int main(int argc, char **argv)
{
  double xmin = -2 ; 
  double xmax =  2 ;
  int    nx   =  5 ;  
  double ymin = -2 ; 
  double ymax =  2 ;
  int    ny   =  5 ;  
  double etamin = -2 ; 
  double etamax =  2 ;
  int    neta   =  5 ;  

  // setting up the grid
  grid* gr = new grid(xmin, xmax, nx, ymin, ymax, ny, etamin, etamax, neta );
  init* in = new init(gr);
  in->set_init() ; // initial condition done ...

  double x[4] ; 
  gr->get_cell(0,1,1)->get_U(x);
  cout << " U[0] = " << x[0] << endl ; 


 delete gr ; 
 delete in ; 
 return 0;
}














#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <chrono>
#include <cmath>
#include "cell.h"
#include "grid.h"
#include "init.h"
#include "eos.h"

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
  double zmin = -2 ; 
  double zmax =  2 ;
  int    nz   =  5 ;  

  // setting up the eos //
  eos* EoS = new eos();

  // setting up the grid //
  grid* gr = new grid(xmin, xmax, nx, ymin, ymax, ny, zmin, zmax, nz );

  // setting up the initial condition //
  init* in = new init(gr);
  in->set_init() ; 


  double x[4] ; 
  gr->get_cell(0,1,1)->get_U(x);
  cout << " U[0] = " << x[0] << endl ; 

  delete in  ; 
  delete gr  ; 
  delete EoS ; 
  return 0;
}














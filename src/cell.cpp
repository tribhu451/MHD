#include "cell.h"

using std::cout;
using std::endl;


// constructor
cell::cell(){
  for(int i=0; i<4; i++)                       
    U[i]=0.;
  for(int i=0; i<3; i++)                       
    E[i]=0.;
  for(int i=0; i<3; i++)                       
    B[i]=0.;
  
}

// destructor
cell::~cell(){
}

  
void cell::set_U( double U0, double U1, double U2, double U3){
  U[0] = U0 ; 
  U[1] = U1 ; 
  U[2] = U2 ; 
  U[3] = U3 ; 
}

void cell::set_U( double* xx){
  U[0] = xx[0] ; 
  U[1] = xx[1] ; 
  U[2] = xx[2] ; 
  U[3] = xx[3] ; 
}


void cell::get_U( double* xx ){
  for(int i=0; i<4; i++)
       xx[i]=U[i];
}


void cell::get_physical_variables(eos* e, double &eps, double* u[4]){
  //U[4], E[4], B[4] ;
  //double T = e->get_temperature(epsilon,nb,nq,ns);
  //double P = e->get_pressure(epsilon,nb,nq,ns);
  //...
  //...
  //...

  //eps = xx  ;
  //u[0] =5 ; 
}























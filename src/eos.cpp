#include "eos.h"  

eos::eos(){
  std::cout << "Using EoS of massless gas ... " << std::endl ; 
}


eos::~eos(){
}

double eos::get_pressure(double epsilon, double rhob, double rhos, double rhoq){
  return epsilon / 3. ; 
}



double eos::get_temperature(double epsilon, double rhob, double rhos, double rhoq){

  // page 163 of book by C. Y. Wong Eq. (9.2) - (9.7) .
  if( fabs(epsilon) < 0.00001 ){
    return 0. ;
  }
  else{
    double gg = 16. ;                   // gluon degeneracy
    double nc = 3.  ;                   // colors 
    double nf = 2.5 ;                   //  flavors 
    double auxiliary = 3 * ( gg + 7./2. * nc * nf ) * 3.1415927 * 3.1415927 /90. ;
    return pow( ( epsilon * 0.007645 ) / auxiliary , 0.25) ;  // T in GeV  
  }

}


double eos::get_entropy(double epsilon, double rhob, double rhos, double rhoq){
  if( fabs(epsilon) < 0.00001 ){
    return 0.;
  }
  else{
    return (4.*epsilon) / (3.*get_temperature(epsilon ,rhob ,rhos ,rhoq)) ; 
  }
}


double eos::get_cs2(double epsilon, double rhob, double rhos, double rhoq){
  return 1./3. ; 
}

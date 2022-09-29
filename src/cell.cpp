#include "cell.h"

using std::cout;
using std::endl;


// constructor
cell::cell()
{
  for(int i = 0; i<4; i++){                       
	U[i] = 0.;
  }
}

// destructor
cell::~cell()
{
}

  
void cell::set_U( double too, double tox, double toy, double toe){
  U[0] = too ; 
  U[1] = tox ; 
  U[2] = toy ; 
  U[3] = toe ; 
}



void cell::get_U( double* xyz ){
  for(int i=0; i<4; i++)
       xyz[i]=U[i];
}








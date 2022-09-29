#include "init.h"


init::init(grid* g_){
  g = g_ ; 
}

init::~init(){
}


void init::set_init(){

  cell* c ; 
  for(int ix=0; ix<g->get_nx(); ix++ )
    for(int iy=0; iy<g->get_ny(); iy++ )
      for(int ieta=0; ieta<g->get_neta(); ieta++ ){
        c = g->get_cell(ix,iy,ieta);
        double x[4] = {0.3, 7.2, 3.9, 4.5};
        c->set_U(x[0], x[1], x[2], x[3]);
  }

  std::cout << "Inititalisation done ... " << std::endl ; 

}

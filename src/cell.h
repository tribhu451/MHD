#pragma once
#include<iostream>
#include<cmath>



using namespace std;

class cell
{
  
  private:

  // conserved quantities // 
  // T^00, T^01, T^02, T^03 //  
  double U[4];

  // 3-Components of electric field at cell centre
  double E[3] ; 

  // 3-Components of magnetic field at cell centre
  double B[3] ;               
  

  public:

  cell();
  ~cell();
  void set_U( double , double , double , double );
  void set_U( double*  );
  void get_U( double*  );

};









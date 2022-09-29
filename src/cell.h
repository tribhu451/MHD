#pragma once
#include<iostream>
#include<cmath>



using namespace std;

class cell
{
  
  private:
  double U[4];    // conserved quantities //  
                  // tau*T^00, tau*T^01, tau*T^02, tau*tau*T^03 // 
  
  public:

  cell();
  ~cell();
  void set_U( double , double , double , double );
  void get_U( double*  );

};









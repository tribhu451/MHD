#pragma once
#include<iostream>
#include<cmath>

using namespace std;

// EoS of massless Gas //
class eos
{
  
  private:

  public:

  eos();
  ~eos();

  // input epsilon and rho's in GeV/fm^3 and 1/fm^3 respectively.
  double get_pressure(double epsilon, double rhob, double rhos, double rhoq);    // returns P in GeV/fm^3 
  double get_temperature(double epsilon, double rhob, double rhos, double rhoq); // returns T in GeV
  double get_entropy(double epsilon, double rhob, double rhos, double rhoq);     // return s in 1/fm^3
  double get_cs2(double epsilon, double rhob, double rhos, double rhoq);

};


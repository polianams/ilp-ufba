#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){
  double A, B, C, k1, k2, d;
  cin >> A >> B >> C;

  d=(B*B-(4*A*C));
  k1=(-B-sqrt(d))/(2*A);
  k2=(-B+sqrt(d))/(2*A);

  cout << fixed << setprecision(5);

if(A!=0.0 && d>=0.0){
    cout << "R1 = " << k2 << endl;
    cout << "R2 = " << k1 << endl;
  }

else if(A==0.0){
    cout << "Impossivel calcular" << endl;
  }

else if(A!=0.0 && d<0){
    cout << "Impossivel calcular" << endl;
  }

return 0;
}
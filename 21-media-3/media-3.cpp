#include <iostream>
#include <iomanip>

using namespace std;

int main(){

cout << fixed << setprecision(2);

float n;
cin >> n;

if(n<=2000.00){
  cout << "Isento" << endl;
}

else if(n>=2000.01 && n<=3000.00){
  cout << "R$ " << (n-2000.01)*0.08 << endl;
}

else if(n>=3000.01 && n<=4500.00){
  cout << "R$ " << 80.00 + (n-3000.00)*0.18 << endl;
}

else if(n>4500.00){
cout << "R$ " << 80.00 + 270.00 + (n-4500.00)*0.28 << endl;
}

return 0;
}
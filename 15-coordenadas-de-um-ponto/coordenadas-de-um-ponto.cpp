#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

double X, Y;
cin >> X >> Y;

cout << fixed << setprecision(1);

if ( X==0.0 && Y==0.0 ) {
cout << "Origem" << endl;
}

else if ( X==0.0 ){
cout << "Eixo Y" << endl;
}

else if ( Y==0.0 ){
cout << "Eixo X" << endl;
}

if ( X>0 && Y>0 ){
cout << "Q1" << endl;
}

else if ( X<0 && Y>0 ){
cout << "Q2" << endl;
}

else if ( X<0 && Y<0 ){
cout << "Q3" << endl;
}

else if ( X>0 && Y<0 ){
cout << "Q4" << endl;
}

  return 0;
}
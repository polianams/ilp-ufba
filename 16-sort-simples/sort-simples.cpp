#include <iostream>
 
using namespace std;
 
int main() {
 
int A, B, C, G, M, P;
cin >> A >> B >> C;

if (A >=B && A>=C){
 G=A;
 if (B>=C){
  M=B;
  P=C;
 }
 else{
  P=B;
  M=C;
 }
}

if (B>=A && B>=C){
 G=B;
 if (A>=C){
  M=A;
  P=C;
 }
 else{
  P=A;
  M=C;
 }
}

if (C>=B && C>=A){
 G=C;
 if (B>=A){
  M=B;
  P=A;
 }
 else{
  P=B;
  M=A;
 }
}

cout << P << endl;
cout << M << endl;
cout << G << endl;
cout << endl;
cout << A << endl;
cout << B << endl;
cout << C << endl;

    return 0;
}
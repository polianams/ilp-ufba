#include <iostream>
 
using namespace std;
 
int main() {
 
int N, L, C, i, qc;
 
cin >> N;

  i=0;
  qc=0;
  while(N>i)
  {

  cin >> L >> C;
  i=i+1;

    if(L>C)
    {
      qc=qc+C;
    }

  }

cout << qc << endl;

return 0;

}
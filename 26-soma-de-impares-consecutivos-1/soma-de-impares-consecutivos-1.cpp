#include <iostream>

using namespace std;

int main (){
    
  int X, Y, i, j, n;
  cin >> X >> Y;

  if(X!=Y)
  {
    if(X>Y)
    {
    n=X;
    X=Y;
    Y=n;
    }

    if(X%2==0)
    {
    X=X-1;
    }

    i=X+2;
    j=0;
    while(Y>i)
    {
    j=j+i;
    i=i+2;
    }

    cout << j << endl;

  }

  else
  {
    cout << 0 << endl;
  }

  return 0;
}
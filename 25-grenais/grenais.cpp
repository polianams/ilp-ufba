#include <iostream>

using namespace std;

int main (){
    
  int i, g, vi, vg, e, j, n;

  n=0;
  vi=0;
  vg=0;
  e=0;
  j=0;

  while (n<2)
  {
    cin >> i >> g;

    if(i>g)
    {
      vi=vi+1;
    }
    else if(i<g)
    {
      vg=vg+1;
    }
    else
    {
      e=e+1;
    }
    
    j=j+1;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> n;
  }

  cout << j << " grenais" << endl;
  cout << "Inter:" << vi << endl;
  cout << "Gremio:" << vg << endl;
  cout << "Empates:" << e << endl;

  if(vi>vg) {
  cout << "Inter venceu mais" << endl;
  }

  else if(vi<vg) {
  cout << "Gremio venceu mais" << endl;
  }

  else {
  cout << "Nao houve vencedor" << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;
int main()
{
int i, j, M, N;
cin >> M >> N;

while (M>0 && N>0)
{
      if (M>N)
      {
        i=N;
        N=M;
        M=i;
      }

      if (N>M)
      {
        i=M;
        j=0;

        while(i<N+1)
        {
          cout << i << " " ;
          j=j+i;
          i=i+1;
        }
          cout << "Sum=" << j << endl;
      }

      else if (M==N)
      {
      cout << endl;
      }

cin >> M >> N;

}

return 0;
}
#include <iostream>

using namespace std;

int main()
{

	int n, posi, maior, i;

	i=0;

		for(n=1;n<=100;n++)
		{
		cin >> maior;

			if(maior>i)
			{
			i=maior;
			posi=n;
			}
		
		}

		cout << i << endl;
		cout << posi << endl;

	return 0;
}
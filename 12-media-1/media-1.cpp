#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    double X, Y, M;
    cin >> X >> Y;
    M = ( X*3.5 + Y*7.5 )/11;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << M << endl;
    
    return 0;
    
}
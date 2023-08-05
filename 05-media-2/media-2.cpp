#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double A, B, C, M;
    cin >> A >> B >> C;
    M = (A*2 + B*3 + C*5)/10;
    
    cout << fixed << setprecision(1);
    
    cout << "MEDIA = " << M << endl;

    return 0;
}

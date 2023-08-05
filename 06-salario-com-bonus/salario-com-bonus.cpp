#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string NOME;
    double SAL, MON, TOT;
    cin >> NOME >> SAL >> MON;
    TOT = SAL + MON*0.15;
    
    
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << TOT << endl;

    return 0;
}

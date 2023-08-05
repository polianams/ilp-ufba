#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int A, B;
    cin >> A >> B;
    
    cout << fixed << setprecision(2);
    
    if (A==1) {
        cout << "Total: R$ " << B*4.00 << endl;
    }
    
    else if (A==2) {
        cout << "Total: R$ " << B*4.50 << endl;
    }

    else if (A==3) {
        cout << "Total: R$ " << B*5.00 << endl;
    }

    else if (A==4) {
        cout << "Total: R$ " << B*2.00 << endl;
    }

    else if (A==5) {
        cout << "Total: R$ " << B*1.50 << endl;
    }
 
    return 0;
}
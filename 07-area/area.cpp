#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    double A, B, C;
    float ATR, ACI, ATP, AQU, ARE, pi=3.14159;
    
    cin >> A >> B >> C;
    ATR = (A*C)/2;
    ACI = pi*(C*C);
    ATP = ((A+B)*C)/2;
    AQU = B*B;
    ARE = A*B;
    
    cout << fixed << setprecision(3);
    
    cout << "TRIANGULO: " << ATR << endl;
    cout << "CIRCULO: " << ACI << endl;
    cout << "TRAPEZIO: " << ATP << endl;
    cout << "QUADRADO: " << AQU << endl;
    cout << "RETANGULO: " << ARE << endl;
    
    return 0;

}
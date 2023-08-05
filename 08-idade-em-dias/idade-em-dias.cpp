#include <iostream>

using namespace std;

int main(){
    int X, A, M, D;
    
    cin >> X;
    A = X/365;
    M = (X%365)/30;
    D = (X%365)%30;
    
    cout << A << " ano(s)" << endl;
    cout << M << " mes(es)" << endl;
    cout << D << " dia(s)" << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){

int Ca, Ba, Pa, Cr, Br, Pr, p;
cin >> Ca >> Ba >> Pa >> Cr >> Br >> Pr;

if (Ca>=Cr && Ba>=Br && Pa>=Pr){
cout << 0 << endl; 
}

else if (Ca<Cr && Ba<Br && Pa<Pr){
cout << Cr-Ca + Br-Ba + Pr-Pa << endl;
}

else if(Ca<Cr && Ba>=Br && Pa>=Pr){
cout << Cr-Ca << endl;
}

else if(Ca>=Cr && Ba<Br && Pa>=Pr){
cout << Br-Ba << endl;
}

else if(Ca>=Cr && Ba>=Br && Pa<Pr){
cout << Pr-Pa << endl;
}

else if(Ca<Cr && Ba<Br && Pa>=Pr){
cout << Cr-Ca + Br-Ba << endl;
}

else if(Ca>=Cr && Ba<Br && Pa<Pr){
cout << Pr-Pa + Br-Ba << endl;
}

else if(Ca<Cr && Ba>=Br && Pa<Pr){
cout << Pr-Pa + Cr-Ca << endl;
}

return 0;
}
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

double A, B, C, ma, mr, me;
cin >> A >> B >> C;

if((A>=B && A>C)||(A>B && A>=C)){
ma=A;
mr=B;
me=C;

	if(ma>=mr+me){
	cout << "NAO FORMA TRIANGULO" << endl;
	}

	else if(ma*ma==mr*mr+me*me){
	cout << "TRIANGULO RETANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}

	}

	else if(ma*ma>mr*mr+me*me){
	cout << "TRIANGULO OBTUSANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}

	}

	else if(ma*ma<mr*mr+me*me){
	cout << "TRIANGULO ACUTANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

}

else if((B>=A && B>C)||(B>A && B>=C)){
ma=B;
mr=A;
me=C;

	if(ma>=mr+me){
	cout << "NAO FORMA TRIANGULO" << endl;
	}

	else if(ma*ma==mr*mr+me*me){
	cout << "TRIANGULO RETANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}

	}

	else if(ma*ma>mr*mr+me*me){
	cout << "TRIANGULO OBTUSANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}

	}

	else if(ma*ma<mr*mr+me*me){
	cout << "TRIANGULO ACUTANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

}

else if((C>=A && C>B)||(C>A && C>=B)){
ma=C;
mr=A;
me=B;

	if(ma>=mr+me){
	cout << "NAO FORMA TRIANGULO" << endl;
	}

	else if(ma*ma==mr*mr+me*me){
	cout << "TRIANGULO RETANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}

	}

	else if(ma*ma>mr*mr+me*me){
	cout << "TRIANGULO OBTUSANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}

	}

	else if(ma*ma<mr*mr+me*me){
	cout << "TRIANGULO ACUTANGULO" << endl;

		if((mr==me)||(ma==mr)||(ma==me)){
		cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

}

else {
cout << "TRIANGULO ACUTANGULO" << endl;
cout << "TRIANGULO EQUILATERO" << endl;
}

return 0;

}
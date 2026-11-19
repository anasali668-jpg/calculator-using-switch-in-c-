#include <iostream>

using namespace std;

int main() {
	int x,y,r;
	char o;
	cout<<"\t\tCalculator\n\n";
	cout<<"Enter 1st Number: ";
	cin>>x;
	cout<<"Enter 2nd Number: ";
	cin>>y;
	cout<<"Enter Operation\n(addition(+) subtraction(-) multiplication(*) division(/) modulus(%)): \n";
	cin>>o;
	switch(o){
		case '+':
		r=x+y;
		cout<<"Result: "<<r;
		break;
		case '-':
		r=x-y;
		cout<<"Result: "<<r;
		break;
		case '*':
		r=x*y;
		cout<<"Result: "<<r;
		break;
		case '/':
		r=x/y;
		cout<<"Result: "<<r;
		break;
		case '%':
		r=x%y;
		cout<<"Result: "<<r;
		break;
		default:
			cout<<"INVALID operator";
			break;
		}
}



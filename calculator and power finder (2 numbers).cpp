#include <iostream>
#include <cmath>
using namespace std;

double addition(double a,double b){
	return a+b;
}
double subtraction(double a,double b){
	return a-b;
}
double multiplication(double a,double b){
	return a*b;
}
double division(double a,double b){
	return a/b;
}
double power(double a,double b){
	return pow(a,b);
}

int main (){
	double num1,num2;
	char op;
	
	cout << "Please enter number 1 and 2: ";
	cin >> num1 >> num2;
	
	cout << "Please enter an operator (+,-,*,/,^) : ";
	cin >> op;
	
	switch (op){
		case '+':
			{
				cout << "The addition is : " << addition(num1,num2);
				break;
			}
			case '-':
			{
				cout << "The subtraction is : " << subtraction(num1,num2);
				break;
			}
			case '*':
			{
				cout << "The multiplication is : " << multiplication(num1,num2);
				break;
			}
			case '/':
			{
				cout << "The division is : " << division(num1,num2);
				break;
			}
			case '^':
			{
				cout << "The power is : " << power(num1,num2);
				break;
			}
	}
	



}


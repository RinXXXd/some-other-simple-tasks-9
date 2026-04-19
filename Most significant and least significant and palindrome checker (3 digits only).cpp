#include <iostream>
using namespace std;

int msd(int a){
	a=a/100;
	return a;
}
int lsd(int a){
	a=a%10;
	return a;
}
void palindrome(int a){
	int first=a/100;
	int last=a%10;
	
	if (first==last){
		cout << "The number is a Palindrome!!";
	}
	else {
		cout << "The number is not a Palindrome!";
	}
	
}

int sum(int a){
		int first=a/100;
		int mid=(a/10)%10;
		int last=a%10;	
		return a=first+mid+last;
}
int main (){
	int num;
	cout << "\t=====Palindrome checker====="<<endl;
	
	cout << "Enter a three digit number : ";
	cin >> num;
	
	cout << "MSD = "<< msd(num) << endl;
	cout << "LSD = "<< lsd(num) << endl;
	 palindrome(num);
	 cout << "\n\nThe sum of the numbers is : " << sum(num);
}

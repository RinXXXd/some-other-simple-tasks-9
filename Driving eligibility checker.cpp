		#include <iostream>
		#include <string>
		using namespace std;
		
		void age(int a,bool* motorcycle,bool* car){
			
				if (a>=18){
				*motorcycle=true;
				*car= true;
		
			}
				else if (a<18 && a>=16){
				*motorcycle = true;
				*car=false;
		
			}
			else if (a<16 && a>0){
				*motorcycle = false;
				*car=false;
		
			}
			else {
				cout << "Invalid! Please enter a positive number as age.\n\n";
			}
		}
		
		void eligible(bool motorcycle,bool car){
			string valid,vehicle;
		cout << "Please enter the type of vehicle you want to drive (car/motorcycle) : ";
		cin >> vehicle;
		cout << "Do you have a valid license (yes/no) : ";
		cin >> valid;
		
		
		if (vehicle== "car" || vehicle=="motorcycle"){
		
		if (valid=="no" || valid=="NO" || valid=="No" || valid=="nO"){
			cout << "Your are not eligible to drive a " << vehicle<<endl;
		}
		
		else if (valid=="yes" || valid=="YES" || valid=="Yes" || valid=="yES" || valid=="yeS" || valid=="YEs" || valid=="yEs" || valid=="YeS" ){
			
			 if (motorcycle == false && vehicle== "motorcycle"){
				cout << "Your are not eligible to drive a " << vehicle<<endl;
			}
			else if (car==false && vehicle == "car" ){
				cout << "Your are not eligible to drive a " << vehicle<<endl;
			}
			else if (car==true && vehicle == "car" ){
				cout << "Your are eligible to drive a " << vehicle<<endl;
			}
			else if (motorcycle == true && vehicle== "motorcycle"){
				cout << "Your are eligible to drive a " << vehicle<<endl;
			}
			
			
			
		
			
		}
		
		else {
			cout << "Please enter yes or no !!";}
			
		}
		else {
				cout << "Please enter a valid vehicle (car/motorcycle)."<<endl;
			}
		}
		 
		int main ()
		{
			int a;
			bool car=false,motorcycle=false;
			string valid,vehicle;
			
		cout << "Please enter your age : ";
			cin >> a;
			
			 age( a, &motorcycle, &car);
			 
			eligible(motorcycle,car);
			
			
		
		}

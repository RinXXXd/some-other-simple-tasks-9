#include <iostream>
using namespace std;

int deposit(int a ,int b){
	cout << "Please enter the amount to deposit : $";
	cin >> b;
	return a+=b;
}
int withdraw(int a ,int b){
	cout << "Please enter the amount to withdraw : $";
	cin >> b;
	return a-=b;
}

int main (){
	int bal=1000;
	int choice=1;    //to avoid garbage value
	int dep,with;
	cout << "\t-----Welcome to ATM System-----\n\n";
	cout <<"1.Check Balance" <<endl;
	cout <<"2.Deposit" <<endl;
	cout <<"3.Withdraw" <<endl;
	cout <<"4.Exit" <<endl;
	while(choice != 4){
	cout << "\n-)Please enter your choice : ";
	cin >> choice;
	
	
	switch (choice)
	{
		case 1:
			{
				cout << "Your Balance is : $" << bal << endl;
				break;
			}
			case 2:
			{
				bal =deposit(bal,dep);
				cout << "\nDeposit successfull! \n" 
				<< "Your balance is : $"<< bal << endl;
				break;
			}
			case 3:
			{
				bal =withdraw(bal,with);
				cout << "\nWithdraw successfull! \n" 
				<< "Your balance is : $"<< bal << endl;
				break;
			}
			default: {
				cout <<"\nPlease enter a valid choice!\n";
				break;
			}
				
			}
			
	}}


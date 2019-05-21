#include <bits/stdc++.h>
#define ll long long
#define lp(i,n) for(int i=0; i<n; ++i)
using namespace std;

class Account()
{
	private:
		float balance;
		string password;
		string ID;

	public:
		float Show_balance();
		bool Verifiy_user(string , string);
		void Deposite(&);
		void Withdraw(&);
}

void Welcome_Message()
{
	cout << "\n\t\t WELCOME TO OUR BANK MANAGEMENT SYSTEM \n" ;
	cout << " Hello...\n\t " 
			" If You Are Client Enter(0) \n\t" 
			" and If You Are Clerk Enter(1) \n" ;
}

bool which_system()
{
	cin >> sys_id ;
	return sys_id ;
}

void Client_Interface()
{
	cout << " WELCOME OUR LOVELY CLIENT :) \n "
	cout << " User name : " ; cin >> name ;
	cout << " PassWord  : " ; cin >> password;

	if(Valid_Client(name,password))
	{
		Client_Menu();
	}
	else
	{
		lp(i,3)
		   if( Valid_Client(name,password) )
				Client_Menu();
			else
			{
				cout << "  No Such UserName or PassWord :( \n" ;
				continue;
			}

		cout << " Multiple Wrong-Data Detection :( \n" ;

	}

}

void Bank_System()
{

}

void Client_Menu()
{
	cout << " Welcome, " << name << " , We Are Happy To See You Again " ;
		cout << " 1) \n "
			" 2) Show my Balance \n "
			" 3) Withdraw \n "
			" 4) Deposit \n "
			" 5) Quit :( \n "
}

int main()
{
	Welcome_Message();

	sys_id = which_system();

	if(sys_id)
		Bank_System();
	else
		Client_Interface();

   return 0;
}

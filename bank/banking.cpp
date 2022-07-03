#include<iostream>
#include<cstring>

using namespace std;

class Account
{

	private:

		string customername;

		int accountnumber;

		string typeofaccount;


		
	public:

		void inputdetails()                

		{ 

			cout<<"---------------------------------------------------"<<endl;

			cout<<"welcome to your account please mention your details:"<<endl;

			cout<<"Enter your name:"<<endl;

			cin>>customername;

			cout<<"Enter your account number:"<<endl;

			cin>>accountnumber;

			cout<<"Type of account:"<<endl;

			cin>>typeofaccount;

		}



		void display()

		{

			cout<<customername<<endl;

			cout<<accountnumber<<endl;

			cout<<typeofaccount<<endl;


			
		}

};

class Currentaccount : public Account

{

	private:



		float balance;


		


	public:



		void display2()


			
		{

			cout<<"\n balance"<<balance;



		}


		


		void deposit()

		{



			float deposit;

			cout<<"enter the amount you want to deposit"<<endl;
                       	cin>>deposit;
			balance=balance+deposit;


			
		}

            	void withdraw()
	{
              
                 	float withdrawmoney;

			int a=1818;

			int b;


			
			cout<<"enter the money you want to withdrawl";

			cin>>withdrawmoney;

			cout<<"enter the pin";

			cin>>b;			

			if(a==b)
				
			{
				balance=balance-withdrawmoney;

				cout<<"left balance: "<<balance;

				cout<<"withdrawl successful";
				
			}

			else
				
			{

				cout<<"error";	
			}
		}


};

int main()


{
	Currentaccount C;

	int choice;

	C.inputdetails();


	cout<<"---------------------welcome please click the below option------------------"<<endl;

	cout<<"-----------------------------------------------------------------------------"<<endl;

	cout<<"\n1.Deposit:"<<endl<<"\n2.withdraw:"<<endl<<"\n3.Display:"<<endl;

	cout<<"---------------------------------------------------------------------"<<endl;

	cout<<"click the option";

	cin>>choice;


	
	switch(choice)


		
	{

		case 1:
			C.deposit();			
			break;
	
		case 2:
			C.withdraw();	
			break;


		case 3:
			C.display2();
			break;
	}

	cout<<"\nthank you ";
	return 0;
}

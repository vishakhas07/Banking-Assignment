#include<iostream>
#include<cstring>

using namespace std;

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




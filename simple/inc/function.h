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

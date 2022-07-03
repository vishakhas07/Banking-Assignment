#include<function.h>
#include<function2.h>

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

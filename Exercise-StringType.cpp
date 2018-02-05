//Nurul Anissa binti Huzaini
//A17DW4087

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string userName;
	string myName="Anissa";

	while(true)
	{
		cout << "Enter your name (or 'quit' to exit): ";
		cin >> userName;
		
		if(userName == "Fawwaz")
	    {
			cout<<"Hey Fawwaz!"<<endl;
		}
		else if(userName == "quit")
		{
			cout<<endl;
			break;
		}
		else
		{
			cout<<"Aha! It's "<<myName<<endl;
		}
	}
	return 0;
}



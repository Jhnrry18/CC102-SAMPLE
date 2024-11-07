#include <iostream>

using namespace std;

int main()
{
	char choice;
	
	cout << "Ask user if it is raining [y/n] ";
	cin >> choice;
	
	if (choice == 'y'){
		cout << "Tell the user to get umbrella";
		
	}else if (choice == 'n'){
		cout << "Tell the user it is sunny";
		
	}else 
		cout << "Invalid choice";
	
	return 0;
	
}

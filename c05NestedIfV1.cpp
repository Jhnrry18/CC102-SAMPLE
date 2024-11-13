#include <iostream>

using namespace std;

int main ()
{
	char answer;
	cout << "Is it raining? [y=yes],[n=no]: ";
	cin>>answer;
	if(answer=='y'){
		cout << "Get an umbrella.\n";
		cout << "Rainfall warning recieved [r=red, or=orange, y=yellow]: ";
		cin >> answer;
		if(answer=='r'){
			cout <<"Landslide and flooding are iminent.";
		}
		else if (answer=='o'){
			cout <<"Flooding is possible.";
		}
		else if (answer=='y'){
			cout <<"possible Flooding.";
		}
		else cout <<"Invalid input.";
		
	}
	else if(answer=='n'){
		cout << "It is sunny.";
	}
	else {
		cout << "invalid input.";
	}

	return 0;
}
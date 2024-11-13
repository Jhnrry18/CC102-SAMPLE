#include <iostream>

using namespace std;

int main()
{
	int grade;
	cout <<"Enter grade: ";
	cin>>grade;
	if (grade == 100){
		cout <<"Equivalent is A";
	}
	else if (grade == 99){
		cout <<"Equivalent is B";
	}
	else if (grade == 98){
		cout <<"Equivalent is C";
	}
	else if (grade == 97){
		cout <<"Equivalent is D";		
	}
	else if (grade == 96){
		cout <<"Equivalent is E";
	}
	else if (grade == 95){
		cout <<"Equivalent is F";
	}
	else if (grade == 94){
		cout <<"Equivalent is G";
	}
	else if (grade == 93){
		cout <<"Equivalent is H";
	}
	else if (grade == 92){
		cout <<"Equivalent is I";
	}
	else if (grade == 91){
		cout <<"Equivalent is J";
	}
	else if (grade == 90){
		cout <<"Equivalent is K";
	}
	else {
		cout <<"Invalid grade. Must be 90-100 only."; 
	}
	return 0;
	}
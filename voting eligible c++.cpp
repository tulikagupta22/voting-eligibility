#include <iostream>
using namespace std;

int main()
{
	int age;
	
	cout << "Enter your age:";
	cin >> age;
	
	// person is teenager or not
	// <=13 and <=19
	
	if(age >=13 && age <=19){
		
		  cout << "person is a teenager\n";
	}
	else{
		  cout << "person is not a teenager\n";
	}
	
	//condition to check voting eligibility
	
	if(age>=18){
		
		cout << "person is eligible\n";
	}
	else{
		cout << "person is not eligible\n";
		
	}
	return 0;
}

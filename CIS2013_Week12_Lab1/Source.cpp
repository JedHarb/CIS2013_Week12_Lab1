#include<iostream>
#include<string>
using namespace std;

class Person {
private: 


public:
	int legs = 2;
	int arms = 2;
	string hair;
	string name;

	Person() { //setting this constructor with the same name as the class causes it to get run when the 'Person' class is called at the beggining of our main
		setName();
		setHair();
		int legs = 2;
		int arms = 2;
	}

	int getLegs() { //we can call a function instead of just a value from the main
		return legs;
	}

	int getArms() {
		return arms;
	}

	void setName() {
		cout << "What is the person's name? ";
		cin >> name;

	}
	void setHair() {
		cout << "What hair color do you want? ";
		cin >> hair;
	}

};

int main() {
	Person bob;
	Person sue;

	cout << "Our person has " << bob.getLegs() << " legs and " << bob.getArms() << " arms and has hair color " << bob.hair << endl; 
	cout << "Our person has " << sue.getLegs() << " legs and " << sue.getArms() << " arms and has hair color " << sue.hair;

	char keepAlive;
	cin >> keepAlive;
}

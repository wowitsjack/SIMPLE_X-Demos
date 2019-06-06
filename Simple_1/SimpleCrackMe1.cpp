//Simple crackme to demonstrate binary protection techniques.
//This particular version has no protection in place, and should be very easy to defeat.

#include <iostream>

using namespace std;

int main() {
	//Ask for the password! :3
	std::cout <<"What's the password? :3" << std::endl;

	//Create Password variable.
	string password;
	cin >> password;

	//Check the password and jump if valid.
	if (password == "WowCool!") {
		//Congratulate
		std::cout << "Nice work, bruh!" << std::endl;
	}
	else {
		//Taunt
		std::cout << "Mmm... Not quite!" << std::endl;
	}
	//Display user result and wait for input
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	char continueProgram = 'a';
	
	
	
	do{
		cout << "Do you want to continue (y/n)?";
		cin >> continueProgram;

		switch (continueProgram) {
			case 'y':
				cout << "Going to continue" << endl;
				break;
			case 'n':
				cout << "Going to exit" << endl;
				break;
			default:
				continueProgram = 'y';
			}
	} while (continueProgram == 'y');
	
	return 0;
}
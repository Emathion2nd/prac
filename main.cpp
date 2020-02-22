#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	std::cout << "Hello, World!" << std::endl; //std::endl;



	#define const double PI = 3.14;
	srand(time(0));
	int numToBeGuessed = 10;//random(10);
	string input;
	int num = rand() % 10;

	do{
		cout << num;
		cout << "Guess a number ";
		getline(cin,input);
		numToBeGuessed = stoi(input);
	}while (num != numToBeGuessed);




	return 0;
}

#include<string>
#include<iostream>
#include "MorseCode.h"
#include "BinarySearchTree.h"
using namespace std;



int main() {

	morseCode instance = morseCode();

	// test encode	
	std::cout << instance.enc("computers") << std::endl;
	// test decode	
	std::cout << instance.dec(".__. .... ___ _. .") << std::endl;

	system("pause");
	return 0;
}

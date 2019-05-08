#include "morseCode.h"

morseCode::morseCode()
{	
	std::ifstream f;// declaration of var and opening file
	std::string get;
	f.open("morse.txt");
	while (std::getline(f, get)) {	//loop to fill more
		std::string let, morse;
		let = get.substr(0, 1);
		morse = get.substr(1, get.size());
		more.insert(morse, let);
	}
	f.close();
}

std::string morseCode::enc(std::string us)
{
	std::string enc;
	std::map<char, std::string> morse;	//create map for storing values


	morse['q'] = "__._";
	morse['z'] = "__..";
	morse['y'] = "_.__";
	morse['c'] = "_._.";	
	morse['x'] = "_.._";
	morse['b'] = "_...";
	morse['j'] = ".___";	
	morse['p'] = ".__.";
	morse['l'] = "._..";
	morse['f'] = ".._.";
	morse['v'] = "..._";
	morse['h'] = "....";
	morse['o'] = "___";
	morse['g'] = "__.";
	morse['k'] = "_._";
	morse['d'] = "_..";
	morse['w'] = ".__";
	morse['r'] = "._.";
	morse['u'] = ".._";
	morse['s'] = "...";
	morse['m'] = "__";
	morse['n'] = "_.";
	morse['a'] = "._";
	morse['i'] = "..";
	morse['t'] = "_";
	morse['e'] = ".";

	// search for values in morse to add to enc
	for (std::string::iterator it = us.begin(); it != us.end(); it++) {
		enc += morse.find(*it)->second;
		enc += " ";
	}
	return enc;
}
std::string morseCode::dec(std::string code)
{
	std::string dec;	 // var for decode
	std::istringstream sin(code);  // declare stream for recording
	std::string mo; // var for holding each letter recorded in morse
	std::string letter;		 // var to hold alphabet letters
	while (sin >> mo) {	// pass each letter ffinding whats needed in the morse tree. then adding to dec
		letter = *more.find(mo);
		dec += letter;
	}
	return dec;
}
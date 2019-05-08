#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include "BinarySearchTree.h"
#include "BTNode.h"

class morseCode
{
private:
	BinarySearchTree<std::string> more;	//the tree
public:
	morseCode();
	std::string enc(std::string userStr);	//encoding function
	std::string dec(std::string morse);		//decoding function0
};

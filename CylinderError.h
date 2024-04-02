#pragma once
#include <iostream>
#include <string>
using namespace std;

class CylinderError
{
public:
	CylinderError(string);
	string what();
private:
	string message;
};


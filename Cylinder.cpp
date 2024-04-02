#define _USE_MATH_DEFINES
#include "Cylinder.h"
#include <math.h>
#include<iostream>
using namespace std;


int Cylinder::getRadius() {
	return this->radius;
}

int Cylinder::getHeight() {
	return this->height;
}

void Cylinder::setRadius(int r) {
	try {
		if (r < 0) {
			throw CylinderError("Negative Radius");
		}
		//TODO: Check for negative value and throw exception
		this->radius = r;
	}
	catch (CylinderError& e) {
		cout << e.what() << endl;
	}
	
}

void Cylinder::setHeight(int h) {
	try {
		if (h < 0) {
			throw CylinderError("Negative Height");
		}
		//TODO: Check for negative value and throw exception
		this->height = h;
	}
	catch (CylinderError& e) {
		cout << e.what() << endl;
	}
}

int Cylinder::getVolume() {
	return M_PI * this->radius * this->radius * this->height;
}

int Cylinder::getSurfaceArea() {
	return (2 * M_PI * this->radius * this->height) + (2 * M_PI * this->radius * this->radius);
}

int Cylinder::compareVolume(Cylinder other) {
	int mine = this->getVolume();
	int yours = other.getVolume();
	if (mine > yours) {
		return 1;
	}
	else if (yours > mine) {
		return -1;
	}
	return 0;
}

int Cylinder::compareSurfaceArea(Cylinder other) {
	int mine = this->getSurfaceArea();
	int yours = other.getSurfaceArea();
	if (mine > yours) {
		return 1;
	}
	else if (yours > mine) {
		return -1;
	}
	return 0;
}

Cylinder::Cylinder(int rad, int hgt) {
	try {
		this->radius = rad;
		this->height = hgt;
		if (rad < 0 || hgt < 0) {
			throw CylinderError("Radius and height can not be negative.");

		}
		//TODO: Check for negative values and throw exceptions

	}
	catch (CylinderError& e) {
		cout << e.what() << endl;
	}
}

Cylinder::Cylinder() {
	this->radius = 0;
	this->height = 0;
}
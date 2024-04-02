#include "CylinderError.h"

class Cylinder {
public:
	int getRadius();
	int getHeight();
	void setRadius(int r);
	void setHeight(int h);
	int getVolume();
	int getSurfaceArea();
	int compareVolume(Cylinder other);
	int compareSurfaceArea(Cylinder other);
	Cylinder(int radius, int height);
	Cylinder();

private:
	int radius;
	int height;
};

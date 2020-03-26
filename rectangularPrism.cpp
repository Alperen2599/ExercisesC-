#include "rectangularPrism.h"
#include <iostream>
using namespace std;

RectangularPrism::RectangularPrism(double g, double y, double u)
{
	if (g <= 0 || y <= 0 || u <= 0) {
		cout << "Boyutlar 0\'dan buyuk olmalidir.";
		exit(1);
	}
	else {
		p1 = g;
		p2 = y;
		p3 = u;
	}
}

RectangularPrism::RectangularPrism(double g, double y)
{
	if (g <= 0 || y <= 0) {
		cout << "Boyutlar 0\'dan buyuk olmalidir.";
		exit(1);
	}
	else {
		p1 = g;
		p2 = y;
		p3 = 1;
	}

}
RectangularPrism::RectangularPrism(double g)
{
	if (g <= 0) {
		cout<< "Boyutlar 0\'dan buyuk olmalidir.";
		exit(1);
	}
	else {
		p1 = g;
		p2 = 1;
		p3 = 1;
	}
}
RectangularPrism::RectangularPrism()
{
	p1 = 1;
	p2 = 1;
	p3 = 1;
}

double RectangularPrism::getWidth()const
{
	return p1;
}

double RectangularPrism::getHeight()const
{
	return p2;
}

double RectangularPrism::getLength()const
{
	return p3;
}

double RectangularPrism::surfaceArea()const
{
	return 2*((p1*p2)+(p1*p3)+(p3*p2));
}

double RectangularPrism::volume()const
{
	return p1*p2*p3;
}

double RectangularPrism::setWidth(double width)
{
	if (width <= 0)
	{
		return p1;
	}

	else

		p1 = width;

	return p1;


}
double RectangularPrism::setHeight(double height)
{
	if (height <= 0)
	{
		return p2;
	}

	else

		p2 = height;

	return p2;

}
double RectangularPrism::setLength(double length)
{
	if (length <= 0)
	{
		return p3;
	}

	else

		p3 = length;

	return p3;

}
bool RectangularPrism::setDimensions(double w, double h, double l)
{
	if (w > 0 && h > 0 && l > 0) 
    {
		setWidth(w);
		setHeight(h);
		setLength(l);
		return true;
	}
	else 
    {
		return false;
	}
	
}


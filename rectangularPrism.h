#pragma once
class RectangularPrism{
public:
	RectangularPrism(double g, double y, double u);
	RectangularPrism(double g, double y);
	RectangularPrism(double g);
	RectangularPrism();
	double getWidth()const;
	double getHeight()const;
	double getLength()const;
	double surfaceArea()const;
	double volume()const;
	bool setDimensions(double w, double h, double l);
	double setWidth(double width);
	double setLength(double height);
	double setHeight(double u);
private:
	double p1, p2, p3;
	
};


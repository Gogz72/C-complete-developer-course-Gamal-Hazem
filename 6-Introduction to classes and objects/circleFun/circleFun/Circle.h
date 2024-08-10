#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{

	public:
		Circle();
		Circle(double radius);
		double getRadius() const;
		void setRadius(double radius);
		double circumfrence() const;
		double area() const;



	private:
		double radius;
		const double PI; //this member will be written in the implementation file in a very interesting way that gives a small performance gain


};


#endif
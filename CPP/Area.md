#include<iostream>
using namespace std;

class Shape
{
	protected:
		double x,y;
	public:
		void get_data();
		virtual void display_area()=0;		
};
class Rectangle : public Shape
{
	double area;	
	public:
		void get_data();
		void display_area();
};
class Triangle : public Shape
{
	double area;	
	public:
		void get_data();
		void display_area();
};

class Circle : public Shape
{
	double area;
	public:
		void get_data();
		void display_area();	
};
void Rectangle::get_data()
{
	cout<<"Enter length and breadth of Rectangle"<<endl;
	cin>>x>>y;
}
void Triangle::get_data()
{
	cout<<"Enter base and height of Triangle"<<endl;
	cin>>x>>y;
}
void Circle::get_data()
{
	cout<<"Enter radius of circle"<<endl;
	cin>>x;
	y=0;
}
void Rectangle::display_area()
{
	area = x*y;
	cout<<"Area of Rectangle = "<<area<<" sq unit"<<endl;
}
void Triangle::display_area()
{
	area = (x*y)/2;
	cout<<"Area of Triangle = "<<area<<" sq unit"<<endl;
}
void Circle::display_area()
{
	area = (22*x*x)/7;
	cout<<"Area of Circle = "<<area<<" sq unit"<<endl;
}
int main()
{
	cout<<"\t  Here we calculate areas!!!! "<<endl;
	cout<<"\t******************************"<<endl;
	cout<<"\n Press 1 to calculate area of rectangle"<<endl;
    cout<<" Press 2 to calculate area of triangle"<<endl;
	cout<<" Press 3 to calculate area of circle"<<endl;	
	int n;
	cin>>n;
	Rectangle r;
	Triangle t;
	Circle c;
	switch(n)
	{
		case 1:
			r.get_data();
			r.display_area();
			break;
		case 2:
			t.get_data();
			t.display_area();
			break;
		case 3:			
			c.get_data();
			c.display_area();
			break;				 
	}
	cout<<"\n\t Thank you !!!"<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;
void area(float r)
{
	float area;
	area=3.14*r*r;
	cout<<"area of circle is:"<<area;
}
void area(int x,int y)
{
	int area;
	area=x*y;
	cout<<"area of rectangle is:"<<area;
	
}
void area(float x,float y)
{
	float area;
	area=(x*y)/2;
	cout<<"area of triangle is:"<<area;
}
int main()
{
	float r;
	int length,width;
	float height,base;
	cout<<"Enter the radius of given circle:";
	cin>>r;
	cout<<"Enter the length and width of given rectangle:";
	cin>>length>>width;
	cout<<"Enter the height and base of given traingle:";
	cin>>height>>base;
	area(r);
	cout<<"\n";
	area(height,base);
	cout<<"\n";
	area(length,width);
	
	
}
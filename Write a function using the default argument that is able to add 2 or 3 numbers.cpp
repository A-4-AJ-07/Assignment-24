#include<iostream>
using namespace std;
int sum(int x=0,int y=0,int z=0)
{
	int total=x+y+z;
	return total;
}
int main()
{
	int total,num1,num2,num3;
	cout<<"Enter three number for addition:";
	cin>>num1>>num2;
	total=sum(num1,num2);
	cout<<"Total "<<total;
}
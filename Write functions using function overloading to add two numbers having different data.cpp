#include<iostream>
using namespace std;
void sum(float x,int y)
{
	float sum;
	sum=x+y;
	cout<<"Sum of numbers are:"<<sum;
}
int main()
{
	int num1;
	float num2;
	cout<<"Enter the two numbers:";
	cin>>num1>>num2;
	sum(num2,num1);
}
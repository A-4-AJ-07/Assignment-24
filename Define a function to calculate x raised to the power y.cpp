#include<iostream>
using namespace std;
void power(int x,int y)
{
	
	int total=1;
	for(int i=1;i<=y;i++)
	{
		total=total*x;
	}
	cout<<"total number = "<<total;
}
int main()
{
	int num,pwr;
	cout<<"enter the number and its power:";
	cin>>num>>pwr;
	power(num,pwr);
}
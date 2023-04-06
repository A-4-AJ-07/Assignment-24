#include<iostream>
using namespace std;
void HighestDigit(int num)
{
	int x,digit=0;
	while(num>0)
	{
		x=num%10;
		num=num/10;
		if(x>digit)
		digit=x;
	}
	cout<<digit<<" is highest in number";
}
int main()
{
	int number;
	cout<<"enter the number:";
	cin>>number;
	HighestDigit(number);
}
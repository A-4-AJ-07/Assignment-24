#include<iostream>
using namespace std;
void prime(int num)
{
	int flag=0;
	for(int i=2;i<num;i++)
	{
	   if(num%i==0)
	   {
	   	flag=1;
	   	break;
	   }
	}
	if(flag==1)
	cout<<"number is not prime";
	else
	cout<<"number is a prime";
}
int main()
{
	int number;
	cout<<"enter the number for prime:";
	cin>>number;
	prime(number);
}
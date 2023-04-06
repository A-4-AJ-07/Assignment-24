#include<iostream>
using namespace std;
void checkfibo(int num)
{
	int first,second,total;
	first=0;second=1;
	int flag=0;
	while(first<=num)
	{
		total=first+second;
		first=second;
		second=total;
		if(first==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"Number is in fibo series";
	else
	cout<<"Not found";
}
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	checkfibo(num);
}
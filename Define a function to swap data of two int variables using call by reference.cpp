#include<iostream>
using namespace std;
int swap(int &num1,int &num2)
{
	int temp;
	temp=num1;
    num1=num2;
	num2=temp;
	cout<<"Number after swap:"<<num1<<" "<<num2;	
}
int main()
{
	int a,b;
	cout<<"enter two number:";
	cin>>a>>b;
	swap(a,b);
	
}
#include<iostream>
using namespace std;
void max(float a,float b)
{
    int max;
	if(a>b)
	max=a;
	else
	max=b;
	cout<<"max number is:"<<max;
}
int main()
{
	float x,y;
	cout<<"Number=";
	cin>>x>>y;
	max(x,y);
}
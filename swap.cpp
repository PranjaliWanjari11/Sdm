#include<iostream>
using namespace std;
int main()
{
	int a=16,b=18,temp;
	cout<<"Before Swapping: "<<endl;
	cout<<"a= "<<a<<",b= "<<b<<endl;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"After Swapping: "<<endl;
	cout<<"a= "<<a<<",b= "<<b<<endl;
	
	return 0;
	
}

#include<iostream>
using namespace std;
int maxofTwo(int a, int b)
{
	if ( a>b)
	return a;
	else
	 return  b;
	
}
 int main()
 
 {
 	int num1, num2;
 	cout<<"Enter two numbers::"<<endl;
 	cin>>num1>>num2;
 	cout<<" The maximum number is "<< 	 maxofTwo( num1, num2)<<endl;
 	return 0;
 }

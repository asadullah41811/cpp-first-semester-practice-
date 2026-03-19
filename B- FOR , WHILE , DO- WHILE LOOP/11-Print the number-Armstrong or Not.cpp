#include<iostream>
using namespace std;
 int main()
 {
 	int i, sum=0,x;
 	cout<<" Enter the number::"<<endl;
 	cin>>i;
 	 x=i;
 	
 	while ( i> 0)
 	{
 		sum = sum+(i%10)*(i%10)*(i%10);
 		i=i/10;
 		
	 }
	 if ( sum==x)
	 {
	 	cout<<" Number is armstrong ::"<<sum<<endl;
	 	
	 }
	else
	{
		cout<<" number is  not armstrong"<<sum<<" "<<endl;
	}
	return 0;
 }

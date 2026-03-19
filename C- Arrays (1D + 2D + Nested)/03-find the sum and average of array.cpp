#include<iostream>
using namespace std;
 int main()
 {
 	long long size; 
	 int sum=0;
 	cout<<" Enter the size of the array::"<<endl;
 	cin>> size;
 	 int arr[size];
 	
 	cout<<" Enter the "<<size<<" of the element"<<endl;
 	for ( int i=0; i<size; i++)
 	{
 		cin>>arr[i]; // suppose user enter the value 10 20 30 40 50
	 }
	 for (int i=0;i<=size; i++)
	 {
	 	sum =sum + arr[i]; // index 0 value 10 index 1 value 20 index 2 value 30 index 3 value 40 index 4 value 50
	 	// 0=0+10 continuous
	  
	 	
	 }
	  double avg = (double)sum/size;
	 cout<<" The avergae of the element is ::"<<avg<<endl;
	 cout<<" the sum of the array is::"<<sum<<endl;
 }

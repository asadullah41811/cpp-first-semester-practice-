#include<iostream>
using namespace std; 
 int main()
 {
 	 int size;
 	 cout<<" Enter the size of the array element::"<<endl;
 	 cin>>size;
 	  int arr[size];
 	  
 	 cout<<" The size of the array is "<<size <<" put element"<<endl;
 	 for( int i=0; i<size; i++)
 	 {
 	 	 cin>>arr[i];
 	 	 
	  }
	  for( int i=0;i<size; i++)
	  {
	  	if( arr[i]%2==0)
	  	{
	  		cout<< arr[i]<<" is even"<<endl;
	  		
		  }
		  else
		  {
		  	  cout<<arr[i]<<" Odd number::"<<endl;
		  }
	  }
	
 }

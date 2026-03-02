#include<iostream>
using namespace std;
 int main()
 {
 	int arr[100],n, key;
 	bool found = false;
 	cout<<" Enter the size of the array:"<<endl;
 	cin>> n;
 	//input arrays elements
 	 cout<< "The size of the array is "<<n<< " put the elements::"<<endl;
// 	 int arr[n];
 	 for( int i=0; i<n; i++)
 	 {
 	 	cin>>arr[i];
	  }
	  // input number to search
	  cout<<" Enter the search element::"<<endl;
	  cin>>key;
	  //linear seach 
	  for ( int i=0;i<n; i++)
	  {
	  	 if(arr[i]==key)
	  	 {cout<<
	  	 " Number found at index:  "<<i<<endl;
	  	 found = true;
	  	 break;
	  	 
		   }
	  	 
	  	 
	  	
	  	  	
	  }
	  if(!found)
	  {
	  	cout<<"number is not found in the array ."<<endl;
	  }
	  return 0;
	
	   
 }

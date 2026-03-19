#include<iostream>  
using namespace std; 

/* 
   Function to check whether a number is Prime or Not
   It takes an integer 'n' as input and returns true or false
*/
bool isPrime(int n)
{
    
    if(n <= 1)
    {
        return false;   // If number is 1 or less, it is not prime
    }

   
    for(int i = 2; i < n; i++)
    {
        // If n is divisible by any number between 2 and n-1
        if(n % i == 0)
            return false;   // Then it is NOT a prime number
    }

    // If no divisor is found, the number is prime
    return true;
}

int main()
{
    int num;  

    // Asking user to enter a number
    cout << "Enter the number: " << endl;
    cin >> num;

    // Calling the function to check if the number is prime
    if(isPrime(num))
    {
        // If function returns true
        cout << "The number is a prime number: " << num << endl;
    }
    else
    {
        // If function returns false
        cout << "The number is not a prime number." << endl;
    }

    return 0;  // Indicates successful program execution
}


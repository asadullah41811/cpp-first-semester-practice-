#include<iostream>   
using namespace std;

/*
   Function to calculate factorial of a number
   It takes an integer n and returns the factorial value
*/
 int factorial(int n)
{
    int fact = 1;  
   
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;  // Multiply fact with current number
    }

    return fact;  
}

int main()
{
    int num;

   
    cout << "Enter a number: ";
    cin >> num;

    // Call the factorial function and display result
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
};


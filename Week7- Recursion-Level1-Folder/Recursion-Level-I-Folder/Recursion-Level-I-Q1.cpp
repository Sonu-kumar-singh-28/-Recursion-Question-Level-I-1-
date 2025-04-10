// function call it self its knoown  is recursion


#include<iostream>
using namespace std;

int factorial(int n)
{
    cout<< " The Number of the Factorial is : " << n <<endl;
    
    if(n==1)
    return 1;
    
    int chotiproblem= factorial(n-1);
    int badiproblem = n*chotiproblem;
    return badiproblem;
}

int main()
{
    int n;
     cout<<" Enter the number : ";
     cin>>n;
     
     int ans = factorial(n);
     cout<< "The Factorial of " << n << " Is : " << ans << endl;
     
     
}
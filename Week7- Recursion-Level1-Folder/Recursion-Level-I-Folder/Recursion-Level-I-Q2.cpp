#include<iostream>
using namespace std;

int counting(int n)
{
    // base class
    if(n==0)
    return 0;

    // processing 
    cout<< n << endl;

    // recursive relations 

    counting(n-1);
    
}

int main()
{
    int n;
    cout<<" Enter the Number : ";
    cin>>n;

    counting(n);
}
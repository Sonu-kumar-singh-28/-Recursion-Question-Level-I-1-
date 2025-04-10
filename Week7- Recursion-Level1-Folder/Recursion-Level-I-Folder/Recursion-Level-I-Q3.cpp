// fabbonaci series 

#include<iostream>
using namespace std;
int findterm(int n)
{
    // base
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    
    // recursive relations 

    int ans = findterm(n-1)+ findterm(n-2);

    return ans;
}

int main()
{
    int n;
    cout<<" Enter the term want to see : ";
    cin>>n;

    int ans = findterm(n);
    cout<<  n << "th term is : "<< ans << endl;
}
#include<iostream>
using namespace std;

int fibnoacci(int n)
{
    if(n==0 or n==1) return n;
    return fibnoacci(n-1) + fibnoacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter the number for fibonacci series : ";
    cin>>n;
    cout<<fibnoacci(n);
}
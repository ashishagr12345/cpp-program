#include<iostream>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{

    if(a>b && a>c && a>d) return a;
    else if(b>a && b>c && b>d) return b;
    else if(c>a && c>b && c>d) return c;
    else return d; 
}
int main()
{
    cout<<"The Maximum number is : "<<max_of_four(5,2,8,1);
}
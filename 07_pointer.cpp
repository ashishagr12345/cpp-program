#include<iostream>
#include<math.h>
using namespace std;

void update(int *x,int *y)
{
    int temp = *x;
    *x = *x + *y;
    if(*y>temp) *y = *y - temp;
    else *y = temp - *y;
}
int main()
{
    int a = 10;
    int b = 20;
    int *x = &a;
    int *y = &b;
    cout<<"Before : "<<a<<"  "<<b<<endl;
    update(x,y);
    cout<<"After : "<<a<<"   "<<b<<endl;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter tha size of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Please Enter the value of array element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
}
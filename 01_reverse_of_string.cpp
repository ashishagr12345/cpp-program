#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverse(string s)
{
    string ans = "";
    for(int i=s.length();i>=0;i--)
    {
        ans += s[i];
    }
    return ans;
}
int main()
{
    // reverse of a string.
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    cout<<"Before string reverse : "<<s<<endl;
    cout<<"After string reverse : "<<reverse(s)<<endl;

}
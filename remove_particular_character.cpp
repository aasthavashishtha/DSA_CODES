#include<iostream>
using namespace std;
string remove_x(string str)
{
    if(str.length()==0)
        return "";
    char ch=str[0];
    string ans=remove_x(str.substr(1));
    if(ch=='x')
        return ans;
    else 
        return ch+ans;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<remove_x(str);
}
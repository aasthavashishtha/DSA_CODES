#include<iostream>
using namespace std;
void print(string str)
{
    if(str.length()==0)
        return;
    print(str.substr(1));    
    cout<<str[0];
}
int main()
{
    string str;
    getline(cin,str);
    print(str);
}
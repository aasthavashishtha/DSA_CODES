#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string duplicate(string str)
{
    if(str.length()==0)
        return "";
    char ch=str[0];
    string ans=duplicate(str.substr(1));
    if(ch==ans[0])
        return ans;
    return ch+ans;
}
int main()
{
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<duplicate(str);
    
}
#include<iostream>
using namespace std;
string sub_strings(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return "";
    }
    char ch=str[0];
    string ros=str.substr(1);
  
    sub_strings(ros,ans);
    sub_strings(ros,ans+ch);
}
int main()
{
    sub_strings("ABCDE","");
}
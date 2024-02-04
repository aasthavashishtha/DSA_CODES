#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string str;
    getline(cin,str);
    sort(str.begin(),str.end(),greater<char>());
    int x = stoi(str);
    cout<<x<<endl;
}

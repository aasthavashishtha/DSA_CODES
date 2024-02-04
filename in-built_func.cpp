#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // to input
    string s(5,'n');
    cout<<s<<endl;

    string s1="aastha vashishtha";
    cout<<s1<<endl;

    string s2;
    cout<<"provide input : ";
    getline(cin,s2);        
    cout<<s2<<endl;

    // to append 
    s1.append(s2);
    cout<<"append "<<s1<<" "<<s2<<endl;

    s1="fam";
    s2="ily";
    s1=s1+s2;
    cout<<" + "<<s1<<" "<<s2<<endl;

    s1="fam";
    s2="ily";
    cout<<" cout + "<<s1+s2<<" "<<s1<<" "<<s2<<endl;

    //clear()
    s1="family";
    s1.clear();
    cout<<s1<<endl;

    //compare two  strings
    s1="abc";
    s2="xyz";
    cout<<"not same "<<s1.compare(s2)<<endl;
    cout<<"same "<<s2.compare(s2)<<endl;

    //to check whether a string is empty or not 
    s1="abcd";
    cout<<"is non empty "<<s1.empty()<<endl;
    s1.clear();
    cout<<"is empty "<<s1.empty()<<endl;

    //to erase specific characters from a string
    s1="Extravagant";
    s1.erase(5,2);          //first argument is index fromm where to erase and second is how many to erase
    cout<<s1<<endl;

    //to find a particular substring in a string and it will return the starting index of that substring if found if not found  then return -1
    s1="Extravagant";
    cout<<"not in string "<<s1.find("is")<<endl;
    cout<<"in string "<<s1.find("vag")<<endl;

    //to insert a substring in a string 
    s1="Extragant";
    cout<<s1.insert(5,"va")<<endl;        //first argument is from where to insert and 2nd is what to insert

    //to create substring
    string str =s1.substr(5,6);
    cout<<"created substring "<<str<<endl;


    //string to integer
    s1="9876";
    int x= stoi(s1);
    cout<<"string to integer "<<x+2<<endl;


    //integer to string
    cout<<"integer to string "<<to_string(x) + '2'<<endl;

    //sorting a string  always include header file <algorithm>
    str="asdfghjklqwertyuiopzxcvbnm";
    sort(str.begin(),str.end());
    cout<<"ascending order "<<str<<endl;

    sort(str.begin(),str.end(),greater<char>());    //to sort in descending  order
    cout<<"descending order "<<str<<endl;

    //to transfrom to uppercase or to lower case
    string uppr="MiXeDCaSe";
    transform(uppr.begin(),uppr.end(),uppr.begin(),::toupper);
    cout<<"to upper case "<<uppr<<endl;

    uppr="MiXeDCaSe";
    transform(uppr.begin(),uppr.end(),uppr.begin(),::tolower);
    cout<<"to lower case "<<uppr<<endl;


    
}


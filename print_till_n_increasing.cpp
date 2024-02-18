#include<iostream>
using namespace std;
void print(int num)
{
    if(num>0)
    {
        cout<<num<<" ";
        print(num-1);
    }

}
int main()
{
    int num;
    cin>>num;
    print(num);
}
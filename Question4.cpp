#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int area = l*b;
    int per = 2*(l+b);
    if(area>per)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
}
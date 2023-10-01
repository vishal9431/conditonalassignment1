#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    if(x1==x2&&x2==x3)
    {
        cout<<"equilateral triangle"<<endl;
    }
    else if(x1==x2||x2==x3||x3==x1)
    {
        cout<<"isoceles"<<endl;
    }
    else
    {
        cout<<"scalen"<<endl;
    }
    
}
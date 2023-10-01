#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0)
    {
        cout<<"origin"<<endl;
    }
    else if(x==0)
    {
        cout<<"x-axis"<<endl;
    }
    else if(y==0)
    {
        cout<<"y-axis"<<endl;
    }
    else
    {
        cout<<"none"<<endl;
    }

    
}
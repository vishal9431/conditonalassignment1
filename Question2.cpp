#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    float area = 3.14*r*r;
    float circum = 2*3.14*r;
    if(area>circum)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
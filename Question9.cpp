#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>=48&&c<=57)
    {
        cout<<"digit"<<endl;
    }
    else if(c>=65&&c<=90||c>=97&&c<=122)
    {
        cout<<"alphabets"<<endl;
    }
    else{
        cout<<"special character"<<endl;
    }

   
   
}
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float x;
    cin>>x;

    if (x>=80)
    {
      cout<<"4.0";
    }else if (x>=75)
    {
      cout<<"3.5";
    }else if (x>=70)
    {
      cout<<"3.0";
    }else if (x>=65)
    {
      cout<<"2.5";
    }else if (x>=60)
    {
      cout<<"2.0";
    }else if (x>=55)
    {
      cout<<"1.5";
    }else if (x>=50)
    {
      cout<<"1.0";
    }else
    {
      cout<<"0";
    }



    return 0;
}

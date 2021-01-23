#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    if (x>0)
    {
      printf("POSITIVE NUMBER");
    }else if (x<0)
    {
      printf("NEGATIVE NUMBER ");
    }else
    {
      printf("ZERO NUMBER ");
    }



    return 0;
}

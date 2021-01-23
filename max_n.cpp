#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n;
    int x,max_x;
    cin>>n;

    cin>>max_x;
    for (i=2;i<=n;i++)
    {
        cin>>x;
        if (max_x > x)
            max_x = x;
    }

    cout<<max_x;

    return 0;
}

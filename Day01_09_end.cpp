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

    int a;
    float b;

    cin>>a;
    scanf("%d",&a);
    scanf("%f",&b);

    if(a>b)
    {
        cout<<a;
    }else if(b>a)
    {
        printf("%f",b);
    }else
    {
        printf("a = b");
    }

    int i,n;

    for (i=1;i<=n;i++)
    {
        cout<<i;
    }

    return 0;
}

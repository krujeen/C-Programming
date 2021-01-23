#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,i,x;
    float sum=0;
    cin>>n;

    for (i=1;i<=n;i++){
        cin>>x;
        sum = sum+x;
    }
    printf("%.2f",sum/n);

    return 0;
}

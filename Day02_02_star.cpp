#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1;
    int i,j;

    for (i=1;i<=n;i++){
       for (j=1;j<=i;j++){
            cout<<"*";
       }
       cout<<"\n";
    }
    return 0;
}

/*

5
*
**
***
****
*****

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,d;
    cin>>d;
    cin>>n;
    int x=1;
    int i,j;

    for (j=1;j<=d;j++){
            printf("   ");
    }
    for (j=1;j<=7-d;j++){
            printf("%2d ",x++);
    }
    cout<<"\n";


    for (i=1;x<=n;i++){
       for (j=1;j<=7;j++){
            printf("%2d ",x++);
            if (x>n){
                break;
            }
       }
       cout<<"\n";
    }
    return 0;
}

/*

3 30
          1  2  3  4
 5  6  7  8  9 10 11
12 13 14 15 16 17 18
19 20 21 22 23 24 25
26 27 28 29 30

*/

#include <iostream>

using namespace std;

int main()
{
    int a[5];
    a[1]=2;
    a[0]=3;
    a[2]=4;
    a[4]=5;
    a[3]=6;
    int s=0;
    while(s<=4){
        if(s==0)
            a[s]=0;
        cout<<a[s]<<endl;
        s++;
    }

    return 0;
}

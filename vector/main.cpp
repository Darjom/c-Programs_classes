#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,y,r,n,xe,ye;
    cin>>x>>y>>r>>n;
    while (n--){
    cin>>xe>>ye;
    int r1,r2,rt;
    r1=xe-x;
    r2=ye-y;
    r1*=r1;
    r2*=r2;
    rt=r1+r2;
    rt=sqrt(rt);
    if(rt<0)
        r1*=-1;
    if(rt<0)
        r2*=-1;
    if(rt<=r)
        cout<<"murio"<<endl;
    else
        cout<<"vivio"<<endl;
    }
    return 0;
}

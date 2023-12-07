#include <iostream>

using namespace std;
//usando 3 variables indique cuales la mayor de estas

//z>x>y
//z>y>x
int main()
{
    int x,y,z,a;
    cin>>x>>y>>z>>a;
    if(x==y or x==z or x==a){
        cout<<x<<" es el espia"<<endl;
    }
    if(y==z or y==a){
        cout<<y<<" es el espia"<<endl;
    }
    if(z==a){
        cout<<z<<" es el espia"<<endl;
    }
    return 0;
}

#include <iostream>


using namespace std;

int main() {
    int x,y,z,x1,y1,z1;
    cin>>x>>y>>z;
    x1=x-20;
    y1=y-20;
    z1=z-20;

    if(x1<0){
        x1=x1*-1;
    }
    if(y1<0){
        y1=y1*-1;
    }
    if(z1<0){
        z1=z1*-1;
    }
    if(x1<y1 and x1<z1){
        cout<<"el mas cercano a 20 es "<<x<<endl;
    }
    if(y1<x1 and y1<z1){
        cout<<"el mas cercano a 20 es "<<y<<endl;
    }
    if(z1<y1 and z1<x1){
        cout<<"el mas cercano a 20 es "<<z<<endl;
    }

   return 0;
}

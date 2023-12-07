#include <iostream>

using namespace std;

int main()
{
    int x=1,y=1;
    int c;
    cout<<x<<endl;
    cout<<y<<endl;
    while(x<=1000){
        c=x;
        x=x+y;
        cout<<x<<endl;
        y=c;
    }
    return 0;
}

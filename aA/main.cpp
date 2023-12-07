#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   int x,y,z;
    while(cin>>x>>y>>z){
        int mini=min(x,y);
        mini=min(z,mini);
        cout<<mini<<endl;
    }
    return 0;
}

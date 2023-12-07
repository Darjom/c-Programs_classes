#include <iostream>

using namespace std;

void pares(int n){
    for(int i=0;i<n;i++){
        if(i%2==0)
        cout<<i<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pares(n);
    return 0;
}

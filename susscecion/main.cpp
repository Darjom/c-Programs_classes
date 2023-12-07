#include <iostream>

using namespace std;

int main()
{

    for(int i=2;i<100;i++){

        if(i==10){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}

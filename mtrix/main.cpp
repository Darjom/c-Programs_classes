#include <iostream>

using namespace std;

int main()
{
    int y;
    cin>>y;
    int x[y][y];
    for(int i=0;i<y;i++){
        for(int j=0;j<y;j++){
            cin>>x[i][j];
        }
    }

    for(int i=0;i<y;i++){
        for(int j=0;j<y;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

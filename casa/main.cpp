#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    while (x--){
        string s;
        cin>>s;
        bool b=true;
        int med=s.length()/2;
            med=med;
            cout<<med;
        for (int i=0;i<med;i++){
            if(s[i]!=s[(s.length()-1)-i]){
                b=false;
            }

        }
        if(b)
            cout<<"Palindroma"<<endl;
        else
            cout<<":("<<endl;
    }

    return 0;
}

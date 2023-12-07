#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> V;
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);


    V.pop_back();


    for(int i=0;i<V.size();i++){
        cout<<V[i]<<endl;
    }


    V.clear();


    for(int i=0;i<V.size();i++){
        cout<<V[i]<<endl;
    }

    V.push_back(10);
    V.push_back(20);
    V.push_back(30);

    cout<<V.empty()<<endl;

    for (vector<int>::iterator it = V.begin(); it != V.end(); ++it) {
        cout << *it << " ";
    }


    vector<int>B={1,2,3};

    V.swap(B);

    cout<<endl;
    cout<<endl;

    for (vector<int>::iterator it = V.begin(); it != V.end(); ++it) {
        cout << *it << " ";
    }

    cout<<endl;
    for(int i=0;i<B.size();i++){
        cout << B[i] <<" ";
    }
    return 0;
}

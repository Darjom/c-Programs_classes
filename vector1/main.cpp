#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> miVector = {"casa","aba","casita","reunion","orellana"};

    sort(miVector.begin(), miVector.end());

    for (int i=0;i<miVector.size();i++) {
        cout << miVector[i] << " ";
    }

    return 0;
}

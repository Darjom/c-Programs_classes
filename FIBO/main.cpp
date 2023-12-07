#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>positivos,negativos;
    int n,m;
    cin>>n;
    while(n--){
      cin>>m;
     if(m>0){
            positivos.push_back(m);
     }
     else{
        negativos.push_back(m);
     }
    }
     sort(positivos.begin(),positivos.end());
     sort(negativos.begin(),negativos.end());
  if(positivos.empty()!=true){
     for(int i=0;i<positivos.size()-1;i++){
        cout<<positivos[i]<<" ";
     }
  cout<<positivos[positivos.size()-1];

    cout<<endl;
  }
  if(negativos.empty()!=true){
     for(int i=0;i<negativos.size()-1;i++){
        cout<<negativos[i]<<" ";
     }
   cout<<negativos[negativos.size()-1];
     cout<<endl;
  }
    return 0;
}

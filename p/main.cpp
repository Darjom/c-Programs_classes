#include <iostream>

using namespace std;
//Dados 5 numeros guardar todos estos en un array 0 en casillas vacias
//te dare un numnero de casos de prueba y luego los casos suma dos numeros
int main()
{   int x[5];
    int z;
    cin>>z;
    for(int i=0;i<z;i++){
        int y;
        cin>>y;
        x[i]=y;
    }
    if(z<5){
        for(int i=z;i<5;i++){
            x[i]=0;
        }
    }
    for(int i=0;i<5;i++){
        cout<<x[i]<<endl;
    }

    return 0;
}

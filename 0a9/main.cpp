#include <iostream>
#include <random>
#include <chrono>

using namespace std;
void randi();
int unirNumeros(int arreglo[]);

int vecti[8];

int main()
{
    int valor;
    randi();
    valor=unirNumeros(vecti);
    cout << valor << endl;
    return 0;
}

void randi(){
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 generador(seed);
    int minimo = 0;
    int maximo = 9;
    uniform_int_distribution<int> distribucion(minimo, maximo);
    for(int i=0;i<8;i++){
    int numeroAleatorio = distribucion(generador);
    vecti[i]=numeroAleatorio;
    cout<<numeroAleatorio<<" ";
    }
    cout<<endl;
}

int unirNumeros(int arreglo[]) {
    int numeroUnido = 0;

    for (int i = 0; i < 8; i++) {
        numeroUnido = numeroUnido * 10 + arreglo[i];
    }

    return numeroUnido;
}

#include <iostream>
#include <cmath>

using namespace std;

string convert_bin_oct(string binario);
int convert_bin_decimal(string binario);
string convert_oct_binario(string octal);
int convert_oct_decimal(string octal);
int string_Entero(string& str);
string convert_decimal_binario(int decimal);
string convert_decimal_octal(int decimal);

int main() {
    int opcion,valorInt;
    string valor;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Convertir Binario a Octal" << endl;
        cout << "2. Convertir Binario a Decimal" << endl;
        cout << "3. Convertir Octal a Binario" << endl;
        cout << "4. Convertir Octal a Decimal" << endl;
        cout << "5. Convertir Decimal a Binario" << endl;
        cout << "6. Convertir Decimal a Octal" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin>>valor;
        switch (opcion) {
            case 0:
                cout << "Saliendo del programa." << endl;
                return 0;

            case 1:
                cout << "Ha seleccionado la Opcion 1." << endl;
                cout<<"la respuesta es "<<convert_bin_oct(valor)<<endl;
                break;

            case 2:
                cout << "Ha seleccionado la Opcion 2." << endl;
                cout<<"la respuesta es "<<convert_bin_decimal(valor)<<endl;

                break;

            case 3:
                cout << "Ha seleccionado la Opcion 3." << endl;
                cout<<"la respuesta es "<<convert_oct_binario(valor)<<endl;
                break;
            case 4:
                cout << "Ha seleccionado la Opcion 4." << endl;
                cout<<"la respuesta es "<<convert_oct_decimal(valor)<<endl;
                break;
            case 5:
                cout << "Ha seleccionado la Opcion 5." << endl;
                valorInt=string_Entero(valor);
                cout<<"la respuesta es "<<convert_decimal_binario(valorInt)<<endl;
                break;
            case 6:
                cout << "Ha seleccionado la Opcion 6." << endl;
                valorInt=string_Entero(valor);
                cout<<"la respuesta es "<<convert_decimal_octal(valorInt)<<endl;
                break;

            default:
                cout << "Opcion no valida. Por favor, seleccione 0, 1 o 2." << endl;
                break;
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }

    return 0;
}

string convert_bin_oct(string binario) {
    while (binario.length() % 3 != 0) {
        binario = '0' + binario;
    }
    string octal = "";
    int i = 0;
    while (i < binario.length()) {
        string grupo = binario.substr(i, 3);
        int decimal = stoi(grupo, nullptr, 2);
        char octalDigit = '0' + decimal;
        octal += octalDigit;
        i += 3;
    }
    return octal;
}

int convert_bin_decimal(string binario) {
    int decimal = 0;
    int longitud = binario.length();

    for (int i = 0; i < longitud; i++) {
        decimal += (binario[i] - '0') * pow(2, longitud - i - 1);
    }

    return decimal;
}
string convert_oct_binario(string octal) {
    string binario = "";
    int longitud = octal.length();
    for (int i = 0; i < longitud; i++) {
        int digito = octal[i] - '0';
        string binarioDigito = "";
        for (int j = 0; j < 3; j++) {
            binarioDigito = char('0' + (digito % 2)) + binarioDigito;
            digito /= 2;
        }
        binario += binarioDigito;
    }
    return binario;
}
int convert_oct_decimal(string octal) {
    int decimal = 0;
    int longitud = octal.length();

    for (int i = 0; i < longitud; i++) {
        int digito = octal[i] - '0';
        decimal = decimal * 8 + digito;
    }

    return decimal;
}
int string_Entero(string& str) {
    return stoi(str);
}

string convert_decimal_binario(int decimal) {
    string binario = "";

    if (decimal == 0) {
        return "0";
    }

    while (decimal > 0) {
        int bit = decimal % 2;
        binario = to_string(bit) + binario;
        decimal /= 2;
    }

    return binario;
}

string convert_decimal_octal(int decimal) {
    string octal = "";

    if (decimal == 0) {
        octal = "0";
    } else {
        while (decimal > 0) {
            int residuo = decimal % 8;
            octal = to_string(residuo) + octal;
            decimal /= 8;
        }
    }

    return octal;
}


#include <iostream>

using namespace std;

int Suma(int a, int b);
int Resta(int a, int b);
int Multiplicacion(int a, int b);
float Division(int a, int b);  // a/b
void Seleccion(int opcion, int a, int b);
void Calculadora();

int main()
{
    Calculadora();

    return 0;
}


int Suma(int a, int b){
    
    return a+b;
    
}


int Resta(int a, int b){
    
    return a-b;
    
}


int Multiplicacion(int a, int b){
    
    return a*b;
    
}


float Division(int a, int b){
    
    return (float)a/(float)b;
    
}



void Seleccion(int opcion, int numeroA, int numeroB){
    
    float resultado = 0;
    
    switch(opcion){
        case 1:
            resultado = (float)Suma(numeroA, numeroB);
            break;
        case 2:
            resultado = (float)Resta(numeroA, numeroB);
            break;
        case 3:
            resultado = (float)Multiplicacion(numeroA, numeroB);
            break;
        case 4:
            resultado = Division(numeroA, numeroB);
            break;
        default:
            cout << "opcion no valida" << endl;
    }
    
    cout << "El resultado de la operación es: " << resultado << endl;
    
}



void Calculadora(){
    
    int a;
    int b;
    int opcion;
    
    cout << "Ingrese la operacion que desa realizar " << endl
         << "   (1) Suma" << endl
         << "   (2) Resta" << endl
         << "   (3) Multiplicacion" << endl
         << "   (4) Division" << endl;
    cin >> opcion;
    
    cout << endl << "Ingrese el primer numero: ";
    cin >> a;
    cout << endl << "Ingrese el segundo numero: ";
    cin >> b;
    
    
    Seleccion(opcion, a, b);
}



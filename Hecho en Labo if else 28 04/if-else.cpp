#include <iostream>
// El Iostream nos permite tener un flujo de datos en el programa, ya sea recibir algo del usuario o mostrar algo es un Stream de datos de In y Out, por eso el include
using namespace std;
// El Using namespace nos da todas las funciones del std para no ponerlo a cada rato
int main()
{
    int temperatura = 0;
    cout << "-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-" << endl;
    cout << "Ingrese la temperatura:" << endl;
    
    cin >> temperatura;
    // Se verifica cuando calor esta haciendo
    if (temperatura < 10)
    {
        cout << "-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-" << endl;
        cout << "Que frio" << endl;
    }
    else if (temperatura > 25)
    {
        cout << "-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-" << endl;
        cout << "Ufff que Calor!!!" << endl;
    }
    else
    {
        cout << "-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-" << endl;
        cout << "Esta fresco" << endl;
    }
    cout << "-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-" << endl;
    cout << "Fin del programa :D" << endl;
    cout << "-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-" << endl;
    // Se finaliza el programa
    return 0;
    // El Endline puede ser /n (<<endl;)
}
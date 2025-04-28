#include <iostream>
using namespace std;
//Hecho por Javier Mangandi (00204125)
/*
Precio de entrada a un Parque:
Un parque cobra diferente segun la edad:
Niños menores de 5 años entran gratis
Entre 5 años y 12 años Pagan $5
Mayores de 12 Pagan $10
*/
int main()
{
    int Ages = 0;
    cout << "___________________________" << endl;
    cout << "Enter your Son Age:" << endl;
    cin >> Ages;

    if (Ages < 5)
    {
        cout << "___________________________" << endl;
        cout << "Your son can enter for Free!!!" << endl;
    }
    else if (Ages < 12)
    {
        cout << "___________________________" << endl;
        cout << "You need to pay $5 FiveDollars" << endl;
    }
    else
    {
        cout << "___________________________" << endl;
        cout << "You need to pay $10 Ten DOllars" << endl;
    }
    cout << "___________________________" << endl;
    cout << "End of the program" << endl;
    cout << "___________________________" << endl;
    return 0;
    // Fin del Programa
}
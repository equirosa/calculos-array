#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tamanno, input, mayor = 0, menor = 0, promedio = 0, contador = 0;

    cout << "¿Cuántos números quiere ingresar?\n";
    cin >> tamanno;

    int arreglo[] = {tamanno};

    for (int i = 0 ; i < tamanno ; i++) {
        cout << "Ingrese el valor deseado.\n";
        cin >> input;

        arreglo[i] = input;
        mayor = input;
        menor = input;
        contador++;
    }

    for (int i : arreglo)
    {
        if ( i > mayor)
        {
            mayor = i;
        }

        if ( i < menor)
        {
            menor = i;
        }

        promedio += i;
    }

    promedio /= contador;

    cout << "De los números que usted ingresó:\n" << "El menor es: " << setprecision(2) << setiosflags( ios::left) << menor <<
            "\n" << "El mayor es: " << setprecision(2) << setiosflags(ios::left) << mayor << "\n" <<
            "Y el promedio es: " << setprecision(2) << setiosflags(ios::left) << promedio << "\n";

    return 0;
}

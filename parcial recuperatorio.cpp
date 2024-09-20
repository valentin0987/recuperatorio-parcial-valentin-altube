
#include <iostream>
#include <iomanip>

//Calculadora de Promedios Ponderados
//Crear un programa que permita al usuario ingresar las notas y ponderaciones de varias
//materias para calcular el promedio ponderado final.
//El programa debe:
//Solicitar al usuario la cantidad de materias a considerar. Para cada materia:
//Solicitar el nombre de la materia. (puede utilizar A, B, C, D, como
//descripción para la materia)
//Solicitar la nota obtenida en la materia.
//Solicitar la ponderación de la materia (un valor porcentual).
//Calcular el promedio ponderado final, utilizando la siguiente fórmula:
//Promedio ponderado = (nota1 * ponderacion1) + (nota2 * ponderacion2) + ... + (notaN *
//ponderacionN) / (ponderacion1 + ponderacion2 + ... + ponderacionN)
//Mostrar el promedio ponderado final con dos decimales de precisión, para lo cual
//podrá utilizar una librería externa o imprimir la precisión con el reemplazador
//adecuado de printf. Para utilizar el camino de la librería externa debe incluir
//<iomanip> con la siguiente sintaxis:
//<< fixed << setprecision(2) << promedioPonderado
//de esta manera nos aseguramos que el número se muestre siempre con la
//cantidad exacta de decimales especificada por setprecision, incluso si esos
//decimales son ceros

using namespace std;

int main() {
    int cantidadMaterias;

    cout << "Ingrese la cantidad de materias a considerar: ";

    cin >> cantidadMaterias;

     char nombres(cantidadMaterias);

     float notas(cantidadMaterias);

     float ponderaciones(cantidadMaterias);

    for (int i = 0; i < cantidadMaterias; ++i) {
        cout << "Ingrese el nombre de la materia " << i + 1 << ": ";
        cin >> nombres;

        cout << "Ingrese la nota obtenida en la materia " << nombres << ": ";
        cin >> notas;

        cout << "Ingrese la ponderación de la materia " << nombres << " (en porcentaje): ";
        cin >> ponderaciones;
    }

    float sumaPonderada = 0;
    float sumaPonderaciones = 0;

    for (int i = 0; i < cantidadMaterias; ++i) {
        sumaPonderada += notas * ponderaciones;
        sumaPonderaciones += ponderaciones;
    }

    float promedioPonderado = sumaPonderada / sumaPonderaciones;

    cout << fixed << setprecision(2);

    cout << "El promedio ponderado final es: " << promedioPonderado << endl;

    return 0;
}



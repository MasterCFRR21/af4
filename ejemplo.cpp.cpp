#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arr[n];

    // Entrada de datos
    cout << "Ingrese los " << n << " numeros:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ordenamiento Burbuja
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Salida de datos ordenados
    cout << "\nArreglo ordenado:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

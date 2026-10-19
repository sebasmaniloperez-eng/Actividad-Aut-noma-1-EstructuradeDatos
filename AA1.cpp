// Lista de compras: ingresar, mostrar y agregar productos.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 1. Crear un vector vacio para guardar textos.
    vector<string> productos;
    string producto;

    // 2. Pedir tres productos y guardarlos.
    cout << "LISTA DE COMPRAS\n";
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese un producto: ";
        getline(cin, producto);
        productos.push_back(producto);
    }

    // 3. Mostrar los productos en el orden de ingreso.
    cout << "\nProductos guardados:\n";
    for (string nombre : productos) {
        cout << "- " << nombre << "\n";
    }
    
    // 4. Agregar un producto mas al final del vector.
    cout << "\nIngrese un producto adicional: ";
    getline(cin, producto);
    productos.push_back(producto);

    // 5. Mostrar la lista actualizada.
    cout << "\nLista actualizada:\n";
    for (string nombre : productos) {
        cout << "- " << nombre << "\n";
    }

    return 0;
}

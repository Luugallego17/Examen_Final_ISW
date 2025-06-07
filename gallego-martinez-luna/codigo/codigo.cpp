#include <iostream>
#include <string>
#include <vector> 

using namespace std;

// Estructura que representa un producto en nuestro inventario
struct Producto {
    string codigo;    // Identificador único del producto (ej: BLU-001)
    string nombre;    // Nombre descriptivo del artículo
    double precio;    // Valor de venta al público
    int stock;       // Cantidad disponible en inventario
};

// Muestra los detalles de un producto de forma organizada
void mostrarDetallesProducto(const Producto& prod) {
    cout << "\n¡Artículo encontrado! :)" << endl;
    cout << "-----------------------------" << endl;
    cout << "Código: " << prod.codigo << endl;
    cout << "Modelo: " << prod.nombre << endl;
    cout << "Precio: $" << prod.precio << endl;
    cout << "En stock: " << prod.stock << " unidades" << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    // Base de datos inicial de productos disponibles
    vector<Producto> inventario = {
        {"BLU-001", "Blusa de seda", 25.50, 10},
        {"PAN-002", "Pantalón de mezclilla", 40.00, 5},
        {"VES-003", "Vestido de verano", 55.99, 8},
        {"ZAP-004", "Zapatos de cuero", 70.00, 3}
    };

    string terminoBusqueda; // Almacena lo que el usuario quiere buscar

    // Bucle principal del programa
    while (true) {
        cout << "\nBuscar producto (ingresa código o nombre) o 'salir' para cerrar: ";
        cin >> terminoBusqueda;

        // Opción para salir del programa
        if (terminoBusqueda == "salir") {
            cout << "Gracias por usar el sistema. ¡Buen día!" << endl;
            break;
        }

        bool productoEncontrado = false; // Para verificar si existe el producto

        // Buscamos en todos los productos del inventario
        for (const auto& item : inventario) {
            if (item.codigo == terminoBusqueda || item.nombre == terminoBusqueda) {
                mostrarDetallesProducto(item);
                productoEncontrado = true;
                break; // Terminamos la búsqueda al encontrar el primero que coincida
            }
        }

        // Mensaje amigable cuando no se encuentra el producto
        if (!productoEncontrado) {
            cout << "\n No tenemos ese producto actualmente. ";
            cout << "Prueba con otro código o nombre. \n";
        }
    }

    return 0; // Fin exitoso del programa
}
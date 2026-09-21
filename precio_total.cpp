#include <iostream>
#include <iomanip>
using namespace std;

// Funcion con parametros de entrada y retorno de valor
double calcularPrecioTotal(double precioUnitario, int cantidad, double porcentajeIva) {
    double subtotal = precioUnitario * cantidad;
    double iva = subtotal * (porcentajeIva / 100);
    double total = subtotal + iva;
    return total;
}

int main() {
    double precio, porcentajeIva;
    int cantidad;

    cout << "=== Calculadora de compra ===" << endl;
    cout << "Precio unitario del producto ($): ";
    cin >> precio;
    cout << "Cantidad de productos: ";
    cin >> cantidad;
    cout << "Porcentaje de IVA (%): ";
    cin >> porcentajeIva;

    // Llamada a la función
    double totalCompra = calcularPrecioTotal(precio, cantidad, porcentajeIva);

    cout << fixed << setprecision(2);
    cout << "El precio total de la compra es: $" << totalCompra << endl;

    return 0;
}

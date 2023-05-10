#include <iostream>

using namespace std;

class CuentaBancaria {
private:
    static double tasaInteres; // Atributo estático que almacena la tasa de interés
    double saldo;

public:
    // Constructor por defecto
    CuentaBancaria() {
        saldo = 0.0;
    }

    // Constructor con parámetro para establecer un saldo inicial
    CuentaBancaria(double saldoInicial) {
        saldo = saldoInicial;
    }

    // Método estático para cambiar la tasa de interés
    static void cambiarTasaInteres(double nuevaTasa) {
        tasaInteres = nuevaTasa;
    }

    // Método para obtener el saldo actual de la cuenta
    double obtenerSaldo() const {
        return saldo;
    }

    // Método para realizar un depósito en la cuenta
    void depositar(double cantidad) {
        saldo += cantidad;
    }

    // Método para realizar un retiro de la cuenta
    bool retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            return true;
        } else {
            return false;
        }
    }

    // Método para calcular el interés ganado por la cuenta
    double calcularInteres() const {
        return saldo * tasaInteres;
    }
};

// Inicializar el atributo estático
double CuentaBancaria::tasaInteres = 0.05;

int main() {
    CuentaBancaria cuenta(1000.0);

    cuenta.depositar(500.0);
    cuenta.retirar(200.0);

    double interesGanado = cuenta.calcularInteres();
    cout << "El interés ganado por la cuenta es " << interesGanado << endl;

    CuentaBancaria::cambiarTasaInteres(0.06);

    interesGanado = cuenta.calcularInteres();
    cout << "El interés ganado por la cuenta con la nueva tasa de interés es " << interesGanado << endl;

    return 0;
}



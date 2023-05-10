#include <iostream>
#include <string>


using namespace std;

class Circulo;

class CalculadoraArea{
    public:
        int hallarArea(Circulo &circulo);
};

class Circulo{
    private:
        int radio;
        int diametro;
    public:
        Circulo(int radio, int diametro){
            this->radio = radio;
            this->diametro = diametro;
        }
        int getRadio(){
            return this->radio;
        }
        friend int CalculadoraArea::hallarArea(Circulo &circulo);
};

int CalculadoraArea::hallarArea(Circulo &circulo){
    return circulo.radio*circulo.radio*3.14;
}

int main(){
    Circulo nuevoCirculo(12,24);
    CalculadoraArea nuevaCalculadora;

    cout<<nuevaCalculadora.hallarArea(nuevoCirculo)<<endl;
}
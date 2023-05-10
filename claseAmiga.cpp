#include <iostream>
#include <string>

using namespace std;

class Circulo{
    private:
        int radio;
        int diametro;
    public:
        Circulo(int radio, int diametro){
            this->diametro = diametro;
            this->radio = radio;
        }
        friend class CalculadoraArea;
};
class CalculadoraArea{
    public:
        int CalcularArea(Circulo &obj){
            return obj.radio*obj.radio*3.14;
        }
};

int main(){
    Circulo nuevoCirculo(10,20);
    CalculadoraArea nuevaCalculadora;

    cout<<nuevaCalculadora.CalcularArea(nuevoCirculo)<<endl;

}
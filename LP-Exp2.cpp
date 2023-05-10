#include <iostream>
#include <string>


using namespace std;

class Circulo{
    private:
        int radio;
        int diametro;
    public:
        Circulo(int radio, int diametro){
            this->radio = radio;
            this->diametro = diametro;
        }
        friend int hallarArea(Circulo &obj);
};
int hallarArea(Circulo &obj){
    return 3.14*obj.radio*obj.radio;
}
int main(){
    Circulo nuevoCirculo(12,24);
    Circulo nuevoCirculo2(15,30);
    Circulo nuevoCirculo3(20,40);

    cout<<hallarArea(nuevoCirculo)<<endl;
    cout<<hallarArea(nuevoCirculo2)<<endl;
    cout<<hallarArea(nuevoCirculo3)<<endl;
}
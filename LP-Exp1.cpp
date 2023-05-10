#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante{
    private:
        string nombre;
        string codigo;
        int edad;
        int nota1;
        int nota2;
        int nota3;
        float notaPromedio;
    public:
        Estudiante()=default;
        Estudiante(string nombre, string codigo, int edad, int nota1, int nota2, int nota3){
            this->nombre = nombre;
            this->codigo = codigo;
            this->edad = edad;
            this->nota1 = nota1;
            this->nota2 = nota2;
            this->nota3 = nota3;
            this->notaPromedio = (nota1+nota2+nota3)/3;
        }
        float getNotaPromedio(){
            return this->notaPromedio;
        }
        string getNombre(){
            return this->nombre;
        }
};
void ordenarVector(vector<Estudiante> &vectorEstudiantes){
    Estudiante aux;
    for(int i =0;i<5;i++){
        for(int j =0;j<4;j++){
            if(vectorEstudiantes[j].getNotaPromedio()<vectorEstudiantes[j+1].getNotaPromedio()){
                aux = vectorEstudiantes[j];
                vectorEstudiantes[j]=vectorEstudiantes[j+1];
                vectorEstudiantes[j+1] = aux;
            }
        }

    }
}
void imprimirEstudiantesMayor(vector<Estudiante> Estudiantes, int mayor){
    for(int i =0;i<5;i++){
        if(Estudiantes[i].getNotaPromedio()>mayor){
            cout<<Estudiantes[i].getNombre()<<endl;
        }
    }
}

int main(){
    vector<Estudiante> Estudiantes;
    
    Estudiante e1("pepe","123",12,12,16,17);
    Estudiante e2("juan","123",12,17,19,18);
    Estudiante e3("pedro","123",12,15,13,15);
    Estudiante e4("felipe","123",12,16,17,17);
    Estudiante e5("floripondio","123",12,12,11,10);

    Estudiantes.push_back(e1);
    Estudiantes.push_back(e2);
    Estudiantes.push_back(e3);
    Estudiantes.push_back(e4);
    Estudiantes.push_back(e5);


    cout<<Estudiantes[0].getNotaPromedio()<<endl;
    cout<<Estudiantes[1].getNotaPromedio()<<endl;
    cout<<Estudiantes[2].getNotaPromedio()<<endl;
    cout<<Estudiantes[3].getNotaPromedio()<<endl;
    cout<<Estudiantes[4].getNotaPromedio()<<endl;
    cout<<"----"<<endl;
    ordenarVector(Estudiantes);

    cout<<Estudiantes[0].getNotaPromedio()<<endl;
    cout<<Estudiantes[1].getNotaPromedio()<<endl;
    cout<<Estudiantes[2].getNotaPromedio()<<endl;
    cout<<Estudiantes[3].getNotaPromedio()<<endl;
    cout<<Estudiantes[4].getNotaPromedio()<<endl;
    cout<<"---"<<endl;
    imprimirEstudiantesMayor(Estudiantes,15);
}
#include <iostream>
#include <string>
#include <vector>
#include "grupo.hpp"
#include "alumno.hpp"
#include "alumno.cpp"
#include "grupo.cpp"

using namespace std;

int main(){
    // Crear un objeto Grupo con una capacidad de 5 alumnos
    Grupo grupo(5);
    // Crear objetos Alumno con sus respectivos datos
    Alumno alumno1("jeremy",21,15.4);
    Alumno alumno5("jason",20,16.7);
    Alumno alumno2("erika",50,18.9);
    Alumno alumno3("juan",33,10.6);
    Alumno alumno4("dayana",17,12.4);
    // Agregar cada objeto Alumno al objeto Grupo
    grupo.agregarAlumno(alumno5);
    grupo.agregarAlumno(alumno1);
    grupo.agregarAlumno(alumno2);
    grupo.agregarAlumno(alumno3);
    grupo.agregarAlumno(alumno4);
    // Ordenar los alumnos por promedio
    grupo.ordenarPorPromedio();
    // Imprimir el grupo
    cout<<"el grupo es::"<<endl;
    cout<<grupo<<endl<<endl;
    // Calcular y mostrar el promedio del grupo
    cout<<"el promedio del grupo es: "<<grupo.promedioGrupo()<<endl;
    // Mostrar al alumno con mejor promedio
    grupo.mejorPromedio();
}
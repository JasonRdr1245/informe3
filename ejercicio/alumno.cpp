#include "alumno.hpp"

// Constructor por defecto de la clase Alumno
Alumno::Alumno(/* args */)
{
}

// Constructor de la clase Alumno que toma como argumentos el nombre, la edad y el promedio
Alumno::Alumno(std::string _nombre,int _edad,float _promedio):nombre(_nombre),edad(_edad),promedio(_promedio){}

// Destructor de la clase Alumno
Alumno::~Alumno()
{
}

// Función que compara dos objetos Alumno según su promedio y devuelve true si el promedio del objeto actual es menor que el del objeto pasado como argumento
bool Alumno::compareAlumnos(const Alumno& _alumno){
    return this->promedio<_alumno.promedio;
}

// Sobrecarga del operador de inserción para la clase Alumno, que permite imprimir un objeto Alumno en un stream de salida
std::ostream& operator<<(std::ostream& os, const Alumno& obj){
    os<<"nombre:"<<obj.nombre<<std::endl; // Imprime el nombre del alumno
    os<<"edad:"<<obj.edad<<std::endl; // Imprime la edad del alumno
    os<<"promedio:"<<obj.promedio<<std::endl; // Imprime el promedio del alumno
    return os;
}
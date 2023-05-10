#pragma once // Directiva para evitar inclusiones múltiples en el compilador.
class Alumno; // Declaración adelantada de la clase Alumno.
class Grupo{
private:
    std::vector<Alumno> alumnos; // Vector para almacenar los alumnos.
    int cantidad; // Cantidad de alumnos que puede tener el grupo.
    
    void quickSort(int low,int high); // Función privada para ordenar los alumnos.
public:
    Grupo(); // Constructor predeterminado.
    Grupo(int _cantidad); // Constructor con parámetro de cantidad.
    ~Grupo(); // Destructor.
    int partition(int low,int high); // Función para realizar la partición en quickSort.
    friend std::ostream& operator<<(std::ostream& os,const Grupo& group); // Sobrecarga del operador de flujo de salida para imprimir el grupo.
    void agregarAlumno(Alumno& _alumno); // Función para agregar un alumno al grupo.
    void ordenarPorPromedio(); // Función para ordenar los alumnos por promedio.
    float promedioGrupo(); // Función para calcular el promedio del grupo.
    float mejorPromedio(); // Función para imprimir el mejor promedio del grupo.
};

#include "alumno.hpp" // Inclusión de la cabecera de la clase Alumno.
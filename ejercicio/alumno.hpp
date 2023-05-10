// Directiva de preprocesador para evitar inclusiones múltiples
#pragma once

// Declaración adelantada de la clase Grupo para poder usarla como friend
class Grupo;

// Definición de la clase Alumno
class Alumno
{
private:
    std::string nombre;
    int edad;
    float promedio;

public:
    // Declaración de la clase como friend para acceder a sus miembros privados
    friend class Alumno;
    // Constructor por defecto
    Alumno(/* args */);
    // Constructor con parámetros
    Alumno(std::string _nombre, int _edad, float _promedio);
    // Destructor
    ~Alumno();
    // Declaración de los métodos de la clase Grupo como friend
    friend float Grupo::promedioGrupo();
    friend float Grupo::mejorPromedio();
    friend void Grupo::ordenarPorPromedio();
    friend int Grupo::partition(int low, int high);
    friend std::ostream& operator<<(std::ostream& os, const Alumno& obj);
    // Método para comparar dos objetos de tipo Alumno por su promedio
    bool compareAlumnos(const Alumno& _alumno);
};

// Inclusión del archivo de cabecera de la clase Grupo
#include "grupo.hpp"

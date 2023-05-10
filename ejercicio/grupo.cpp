#include "grupo.hpp"

Grupo::Grupo(){} // Constructor vacío
Grupo::Grupo(int _cantidad):cantidad(_cantidad){} // Constructor con un parámetro de cantidad y se inicializa en el constructor

std::ostream& operator<<(std::ostream& os,const Grupo& group){
    os<<"cantidad:  "<<group.cantidad<<std::endl;
    for (Alumno alumno : group.alumnos)
    {
        std::cout<<std::endl;
        std::cout<<alumno;
    }
    
    return os;
}

float Grupo::promedioGrupo(){
    // Cálculo del promedio del grupo
    float n=this->alumnos.size();
    float sumaDeAlumnos{0};
    for (Alumno& alumno:this->alumnos)
    {
        sumaDeAlumnos=sumaDeAlumnos+alumno.promedio;
    }
    return sumaDeAlumnos/n;
}

void Grupo::agregarAlumno(Alumno& _alumno){
    // Agrega un alumno al grupo si no se ha alcanzado la cantidad máxima permitida
    if (this->alumnos.size()<this->cantidad)
    {
        alumnos.push_back(_alumno);
    }
    else{
        std::cout<<"alumno no agregado, supera la cantidad maxima permitida";
    }
}

float Grupo::mejorPromedio(){
    // Busca al alumno con el mejor promedio en el grupo
    Alumno mejorPromedio=this->alumnos[0];
    for (Alumno alumno:this->alumnos)
    {
        if (alumno.promedio>=mejorPromedio.promedio)
        {
            mejorPromedio=alumno;
        }
    }
    std::cout<<"el mejor promedio es: "<<std::endl;
    std::cout<<mejorPromedio;
    return mejorPromedio.promedio;
}

int Grupo::partition(int low,int high){
    // Método para particionar el arreglo para el ordenamiento quickSort
    int mid=low+(high-low)/2;
    float pivot=this->alumnos[mid].promedio;
    int i=low-1;
    int j=high+1;
    while (true)
    {
        do{
            i++;
        }while(this->alumnos[i].promedio<pivot);//si encuentra un mayor lo combia por un menor
        do{
            j--;
        }while(this->alumnos[j].promedio>pivot);
        if (i>=j)
        {
            return i;//retorna i en todos los casos de menor a mayor;de mayor a menor retorna j
        }
        std::swap(this->alumnos[i],this->alumnos[j]);
    }
}

void Grupo::ordenarPorPromedio(){
    // Ordena los alumnos en el grupo por promedio usando quickSort
    quickSort(0,this->alumnos.size()-1);
}

void Grupo::quickSort(int low,int high){
    // Método para ordenar los alumnos por promedio usando quickSort
    if (low<high)
    {
        int pi=partition(low,high);
        quickSort(low,pi-1);
        quickSort(pi+1,high);
    }
}

Grupo::~Grupo(){} // Destructor vacío
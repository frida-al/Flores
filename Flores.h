/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 09 de noviembre 2023
*/

/*
*La clase Flores contiene 4 métodos, de los cuales, 3 sirven para 
*mostrar información de la planta (color, edad, nombre), 
* el cuarto método calcula cuántos litros de agua neceista 
*cada planta, dependiendo de la estación del año.
*/

#include <string>
//Clase Flores
class Flores{
    private: //Declaración de atributos
        std::string color;
        int edad;
        std::string nombre;
        float litros;

    public: // Prototipos
        Flores(): color(""), edad(0), nombre(""), litros(0){}; // Constructor por default 
        Flores(std::string col, int ed, std::string tip, float lit): color(col), edad(ed), nombre(tip), litros(lit){}; // Constructor que recibe valores
        //Parámetros: string col: color de la planta, int ed: edad de la planta, string tip: nombre de la planta, float lit: litros que consume la planta.
        std::string get_color();
        void set_color(std::string);
        int get_edad();
        void set_edad(int);
        std::string get_nombre();
        void set_nombre(std::string);
        float get_litros();
        void set_litros(int);
        void riego(std::string temporada);


}; 
void Flores::set_color(std::string col){ //setter de color
    color = col;
}
std::string Flores::get_color(){ //getter de color
    return color;
}
void Flores::set_edad(int ed){ //setter de edad
    edad = ed;
}
int Flores::get_edad(){ // getter de edad
    return edad;
}
void Flores::set_nombre(std::string tip){ // setter de nombre
    nombre = tip;
}
std::string Flores::get_nombre(){ // getter de nombre
    return nombre;
}
void Flores::set_litros(int lit){ // setter de litros
    litros = lit;
}
float Flores::get_litros(){ // getter de litros
    return litros;
}
void Flores::riego(std::string temporada){ // función riego. Basado en la época del año, calcula los litros de agua que debe tomar la planta
    if (temporada == "winter"){
        litros = litros / 2;
    }
    else 
        litros = litros;
}

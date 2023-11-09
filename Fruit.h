/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 09 de noviembre 2023
*/

/*
*La clase Fruit contiene 4 métodos, de los cuales, 3 sirven para 
*porporcionar información de la planta, el cuarto método sirve
*para calcular cuánto mide la planta con respecto a la edad.
*/

#include <string>
//Clase Fruit
class Fruit {

    private: // Declaración de atributos
    std::string name;
    std::string type;
    std::string time;
    int altura;

    public: //Prototipos
    Fruit(): name(""), type(""), time(""), altura(){}; // Constructor por default
    Fruit(std::string na, std::string ty, std::string tim, int alt): name(na), type(ty), time(tim), altura(alt){}; //Constructor que recibe valores. 
    //Parámetros: string na: nombre de la fruta que da el árbol, string ty: tipo de planta, string tim: época del año en el que la planta da frutos, int alt: altura inicial.
    void set_name(std::string);
    std::string get_name();
    void set_type(std::string);
    std::string get_type();
    void set_time(std::string);
    std::string get_time();
    void set_altura(int);
    int get_altura();
    int height(int, int);
};
void Fruit::set_name(std::string na ){ // setter de nombre
    name = na;
}
std::string Fruit::get_name(){ // getter de nombre
    return name;
}
void Fruit::set_type(std::string ty){ // setter de tipo
    type = ty;
}
std::string Fruit::get_type(){ // getter de tipo
    return type;
}
void Fruit::set_time(std::string tim){ // setter de tiempo
    time = tim;
}
std::string Fruit::get_time(){ // getter de tiempo
    return time;
}
void Fruit::set_altura(int alt){ // setter de altura
    altura = alt;
}
int Fruit::get_altura(){ // getter de altura
    return altura;
}
int Fruit::height(int edad, int pulg){ // función altura. Calcula la altura del árbol en pulgadas con respecto a su edad
    if (edad < 20){
    altura = altura + (edad * pulg);
    }
}

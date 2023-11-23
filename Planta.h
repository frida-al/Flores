/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 22 de noviembre 2023
*/

/*
* En este archivo se encuentra la clase Planta, que es la clase padre, 
*junto con 3 clases hijas, que son Fruit, Medicinales y Flores. De la clase 
*padre se heredan los atributos nombre y edad, y cada clase hija agrega 
*atributos y métodos propios.
*/

#include <string>
#include "Abejas.h" // Se incluye el archivo de la clase de composición

class Planta { // Clase padre que contiene atributos de nombre y edad, que se heredan a las clases hijas.

    private: // Atributos
    std::string nombre;

    public: 
    int edad; // Atributo público
    Planta(): nombre(""), edad(0){}; // Constructor por default 
    Planta(std::string nom, int ed): nombre(nom), edad(ed){};
    void set_nombre (std::string); // Prototipo
    std::string get_nombre(); // Prototipo
    void set_edad (int); // Prototipo
    int get_edad(); // Prototipo
};

void Planta::set_nombre(std::string nom){ // setter de nombre
    nombre = nom;
}

std::string Planta::get_nombre(){ // getter de nombre
    return nombre;
}

void Planta::set_edad(int ed){ // setter de edad
    edad = ed;
}

int Planta::get_edad(){ // getter de edad
    return edad;
}

// Clase Flores
class Flores:public Planta{ //La clase Flores contiene 2 métodos, 1 sirve para mostrar el color de la planta y el otro para calcular cuántos litros de agua necesita cada planta dependiento de la estación del año
    
    private: //Declaración de atributos
    std::string color;
    float litros;
    Abejas poliniza; // Objeto tipo Abejas

    public: // Prototipos
    Flores(): Planta(), color(""), litros(0){}; // Constructor por default
    Flores(std::string nom, int ed, std::string col, float lit): Planta(nom, ed), color(col), litros(lit){};
    void set_color(std::string);
    std::string get_color();
    void set_litros(float);
    float get_litros();
    void riego(std::string);
    Abejas get_abejas();
    void set_abejas(Abejas);

};
void Flores::set_color(std::string col){ // setter de color
    color = col;
}

std::string Flores::get_color(){ // getter de color
    return color;
}

void Flores::set_litros(float lit){ // setter de color
    litros = lit;
}

float Flores::get_litros(){ // getter de color
    return litros;
}

void Flores::riego(std::string temporada){ // función riego. Basado en la época del año, calcula los litros de agua que debe tomar la planta
    if (temporada == "winter" || temporada == "Winter"){
        litros = litros / 2;
    }
}

void Flores::set_abejas(Abejas pol){
    poliniza = pol;
}
Abejas Flores::get_abejas(){
    return poliniza;
}

//Clase Medicinales
class Medicinales:public Planta{ // La clase Medicinales contiene 2 métodos que sirven para mostrar el origen de la planta y su uso.

    private: // Declaración de atributos
    std::string uso;
    std::string origen;

    public: // Prototipos
    Medicinales(): Planta(), uso(""), origen(""){}; // Constructor por default
    Medicinales(std::string nom, int ed, std::string ori, std::string use): Planta(nom, ed), uso(use), origen(ori){};
    void set_origen(std::string);
    std::string get_origen();
    void set_uso(std::string);
    std::string get_uso();
};
void Medicinales::set_origen(std::string ori){ // setter de origen
    origen = ori;
}
std::string Medicinales::get_origen(){ // getter de origen
    return origen;
}
void Medicinales::set_uso(std::string use){ // setter de uso
    uso = use;
}
std::string Medicinales::get_uso(){ // getter de uso
    return uso;
}

//Clase Fruit
class Fruit:public Planta{ //La clase Fruit contiene 3 métodos, que sirven para proporcionar información de la planta y calcular cuánto mide la planta con respecto a la edad.

    private: // Declaración de atributos
    std::string type;
    std::string time;
    int altura;

    public: //Prototipos
    Fruit(): Planta(), type(""), time(""), altura(0){}; // Constructor por default
    Fruit(std::string nom, int ed, std::string ty, std::string ti, int alt): Planta(nom, ed), type(ty), time(ti), altura(alt){};
    void set_type(std::string);
    std::string get_type();
    void set_time(std::string);
    std::string get_time();
    void set_altura(int);
    int get_altura();
    void height(int, int);
};

void Fruit::set_type(std::string ty){ // setter de tipo
    type = ty;
}

std::string Fruit::get_type(){ // getter de tipo
    return type;
}

void Fruit::set_time(std::string ti){ // setter de tiempo
    time = ti;
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

void Fruit::height(int pulg, int years){ // función altura. Calcula la altura del árbol en pulgadas con respecto a su edad
    if (years < 20){
    altura = (years * pulg);
    
}
}

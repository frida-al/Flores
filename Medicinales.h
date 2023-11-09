/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 09 de noviembre 2023
*/

/*
* La clase Medicinales contiene 3 métodos que sirven para mostrar 
*el nombre de la planta, su origen y su uso.
*/

#include <string>
//Clase Medicinales
class Medicinales {

    private: // Declaración de atributos
    std::string nombre;
    std::string origen; 
    std::string uso;

    public: //Prototipos
    Medicinales(): nombre(""), origen(""), uso(""){}; //Constructor por default
    Medicinales(std::string nom, std::string ori, std::string use): origen(ori), nombre(nom), uso(use){}; //Constructor que recibe valores
    //Parámetros: string nom: nombre de la planta, string ori: de dónde viene la planta, string use: usos de la planta.
    void set_origen(std::string);
    std::string get_origen();
    void set_nombre(std::string);
    std::string get_nombre();
    void set_uso(std::string);
    std::string get_uso();

};

void Medicinales::set_origen(std::string ori){ // setter de origen
    origen = ori;
}
std::string Medicinales::get_origen(){ // getter de origen
    return origen;
}
void Medicinales::set_nombre (std::string nom){ // setter de nombre
    nombre = nom;
}
std::string Medicinales::get_nombre(){ // getter de nombre
    return nombre;
}
void Medicinales::set_uso(std::string use){ // setter de uso
    uso = use;
}
std::string Medicinales::get_uso(){ // getter de uso
    return uso;
}

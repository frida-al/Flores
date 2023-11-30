# Invernadero
Este proyecto es para la materia Pensamiento Computacional Orientado a Objetos TC1033.302.

## Contexto
Un invernadero quiere juntar información acerca de los diferentes tipos de plantas que maneja, por lo que se generan clases para cada tipo de planta: *flores, plantas medicinales y árboles frutales*. Asimismo, buscan calcular con cuántos litros de agua hay que regar las flores dependiendo de la estación del año en la que se encuentren y calcular cuántas pulgadas mide cada árbol frutal dependiendo de su edad.
## Funcionalidad
Primeramente, el programa imprime un menú que le permite al usuario elegir qué información quiere obtener. Las opciones son 
1. Flores
2. Plantas medicinales
3. Árboles frutales

Una vez realizada la elección, se puede acceder a más información acerca de cada tipo de planta. Si el usuario escoge *flores* o *árboles frutales*, podrá calcular el riego y la altura respectivamente.
## Consideraciones 
El programa se encuentra en **inglés**, por lo que se le solicita al usuario que sus respuestas sean en el mismo idioma. Gracias.
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos
- compilar con: "g++ Flores.h Medicinales.h Fruit.h main.cpp"
- correr en linux: "/a.out"
- correr en windows: "a.exe"
## Correcciones
Versión 1.0: 08 de noviembre 2023. *Subcompetencias:* En este avance se implementó el repositorio en Github, se crearon sólo los archivos necesarios, se construyeron métodos y atributos (clase Flores **ln 93-200**, clase Medicinales **ln 202-270** y clase Frutales **ln 272-376**). Se comprueban los métodos y atributos desde el **main ln 65-154**.

Versión 2.0: 14 de noviembre 2023. Esta versión necesita solamente un archivo .h, que es **"Planta.h"**. En dicho archivo se encuentran las 3 clases previamente existentes. Estas tres clases (**flores, plantas medicinales y árboles frutales**) han pasado a ser clases hijas al hacer uso de la herencia. La clase padre es ahora **Planta**, de la cuál se heredan los atributos y métodos de nombre y edad. *Subcompetencias:* Se creó un UML y se agregó al repositorio en formato .png. Al implementar herencia, se juntaron todas las clases en un mismo archivo .h, por lo que se eliminaron 2 archivos .h. Se creó la clase Planta, que es la clase padre **ln 21-91**. Se implementó la herencia en las clases hijas **líneas 94 (Flores), 203 (Medicinales) y 273 (Fruit)**. 

Versión 3.0: 22 de noviembre 2023. En esta versión se mantiene el archivo **"Planta.h"**, que contiene la clase *Planta* más las tres clases hijas *flores, plantas medicinales y árboles frutales*, sin embargo, se agrega el archivo **Abejas.h**, que es un ejemplo de composición para la clase *FLORES* solamente. El propósito de este archivo es saber si ha habido contacto entre las flores y las abejas. Si sí ha habido contacto, se expresa que las flores han sido polinizadas. De lo contrario, se considera que las flores no han sido polinizadas.

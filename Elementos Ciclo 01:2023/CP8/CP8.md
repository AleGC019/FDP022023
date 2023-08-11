
# Manejo de archivos

Los archivos o ficheros son la forma en la que C + + permite el acceso al disco.

Para manejar archivos, debemos declarar una variable de tipo ofstream, que apuntará al fichero, después invocamos al método open, pasándole el nombre del archivo y el modo de apertura, tenemos los siguientes métodos:

-   output: Escribe sobre el archivo, reemplazando el contenido que exista en el mismo, se accede a este método utilizando fstream::out.
    
-   append: agrega el contenido al final del archivo, por lo que no reemplaza al existente. se accede a este método utilizando fstream::app.
    

A Continuación se muestra un ejemplo de un código de escritura de un archivo txt
**![](https://lh4.googleusercontent.com/Q_8h9nrQ8w_8kbSFGMby1KkPgiKyFrGYybZwxL9T3f_HparNuzJt86xbVALdTT6YqchKla-aVRy90p3j2JQSHEA_l7Jktu79tS6PogiOKCFE0E20946GQv2bT3E2WVNMQmG_Lw-0hlzm8614gU4mG4Q)**

Para leer el contenido de un archivo se necesita una variable de tipo **ifstream**. En este caso se necesita una cadena constante, por eso se invoca a **c_str**.

**![](https://lh5.googleusercontent.com/J23SzeQLjFTLFg8KU1115ykJabm7ozFSU6IyJGpXQh5AeeajsNU-yS0hUMoNahB7N7m69ys6gXpciVsZnW6bbCixcC8mJD4QXOwGehEXLMsxftXdAaRRWZajP985Mdh8pCNzqCmWJTRiDkEJCu9Hr6Q)**

A continuación se muestra un ejemplo detallado en el que se hará uso de un struct de tipo película, que tendrá las variables ISBM, nombre y director de tipo string, y duración de tipo entero la cual se expresa en minutos.

**![](https://lh3.googleusercontent.com/gQVR9nQZsTQknx7n3L96yy9VwaFxpoOT1xencYZQvtPgrleEvBbT9ViqtrPQDqJjWK8Sb47BZYsSrxKOfYHH--OQVo4w3SdwW33A6sbJuiC-TIqZbOCY5iayhLjeNf2g8oWmVFYhYjKEw0xDfxqJ8dw)**

## Método Buscar

En este método se define el nombre del archivo, se solicita a través de consola el código ISBM, y debido a que cada registro de película guarda sus propiedades separado por saltos de línea, se usa un switch case para en caso de encontrar la pelicula mostrarla en un formato adecuado  
**![](https://lh6.googleusercontent.com/uAQUB24pNlibMrF7-rTmMXYKSD3VmcCWLM3wx8G1YGI9GtPLkkhS_cLDYtkq8xBkWkOq8iGAhKYcAWV1SM2avVZaXICLknmYsxpIJAGIjsqwaD_0uZgGdLSGggFo9dJ3-91KV3a7DF9tx1MfAzn2CJ8)**

## Método Leer

Este método se encarga de cargar el archivo txt completo, recordando el formato designado el cual separa por saltos de línea las propiedades de cada película ingresada, para así mostrarlas de forma amena.

**![](https://lh6.googleusercontent.com/dqIziGvnfux7IBHRQsrKYPd7A412lgJeO0XFkO1F12OjFkC-JwIISPATCNTnhItCAklErW0cAYeP3aB6ci33iHss2MXJVr1r9xCJ4RIMn_a9kPgGLmvDavu92PJGd1y_3w-YT5GexkDGs_l2idYgN7c)**
## **Método Agregar**

Este método se encarga de comprobar si existe el archivo txt, en dado caso no exista se encarga de crearlo, posteriormente se solicitan las propiedades que el struct necesita, y se le envían al archivo con el formato designado que es el orden de las propiedades separado por un salto de línea.

**![](https://lh4.googleusercontent.com/8Y0tU3ucGp4X7L96w6ZPpnesA7L6Pc60Q-MIKjj5vmBYb0sRJSROKu-4dsESpeSgBK2TB2rdUaU0pga4kOaEYA-oLcL2P03moSzGVQVm8gNNFQKtjbY-nwo9tW6Rf9Pz8boDleGqou5qjHM3P0X72RU)**

**El método eliminar y un método adicional útil para el proyecto se explican en el siguiente enlace debido a su longitud y complejidad**

**[Codigo con los metodos extra](https://onlinegdb.com/_4PS2A4L2H)**

## Ejercicio Evaluado

1.  Formar grupos de 3 personas
    
2.  Un integrante debe acceder a la tarea que está en Moodle llamada cp8 y deberá crear un grupo en github classroom. Los demás integrantes deberán unirse al grupo creado
    
3.  Todos los integrantes deberán clonar el repositorio
    
4.  Crea una rama(Por estudiante) en el repositorio clonado y sube los cambios a esa rama
    
5.  Realizar el ejercicio que asigne el instructor/a
    
6.  Sube los cambios al repositorio utiliza los comandos en el orden correcto (git add, git commit, git push)
    
7.  Realiza la fusión de la rama con el main
    
8.  Puedes verificar en tu repositorio de GitHub los cambios que realizaste al código.
    
9.  Borrar las credenciales de windows
    
10.  Borrar de la computadora el o los programas creados durante la práctica

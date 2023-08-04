
# Flujogramas y Pseudocódigo.

## Introducción.

Un Diagrama de Flujo representa la esquematización gráfica de un algoritmo, el cual muestra gráficamente los pasos o procesos a seguir para alcanzar la solución de un problema. Su correcta construcción es sumamente importante porque, a partir del mismo se escribe un programa en algún Lenguaje de Programación. Si el Diagrama de Flujo está completo y correcto, el paso del mismo a un Lenguaje de Programación es relativamente simple y directo. Es importante resaltar que el Diagrama de Flujo muestra el sistema como una red de procesos funcionales conectados entre sí por “Tuberías” y “Depósitos” de datos que permite describir el movimiento de los datos a través del Sistema. Este describe: Lugares de Origen y Destino de los datos, Transformaciones a las que son sometidos los datos, Lugares en los que se almacenan los datos dentro del sistema, Los canales por donde circulan los datos. Además de esto podemos decir que este es una representación particular de un Sistema, el cual lo contempla en términos de sus componentes indicando el enlace entre los mismos.

## Flujograma.

### Definición:

Un flujograma o diagrama de flujo consiste en una figura o gráfico que representa una serie de procesos o un grupo de actividades por medio de símbolos.  
Por tanto, la principal utilidad de un flujograma es que muestra de un solo vistazo un proceso que puede ser complejo.  
De esta forma, cada persona implicada en él sabe cuál es su labor. Con esto se consigue incrementar la eficiencia y reducir las posibles incidencias.

### **Símbolos utilizados en los diagramas de flujo:**

-   **Línea de flujo:** muestra la dirección del proceso. Cada línea de flujo conecta dos bloques.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfaf2b89af639ad6f81_flowline.png)
    
-   **Terminal**: Indica el comienzo o el final de un diagrama de flujo.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7df87eb50eb587761d10_terminal.png)
    
-   **Proceso**: Representa un paso en un proceso. Este es el componente más común de un diagrama de flujo.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7df944917a4497b17aab_process.png)
    
-   **Decisión**: Muestra un paso que decide el próximo paso en un proceso. Esta es comúnmente una pregunta de sí/no o verdadero/falso.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7df92183ef07ea02ad8d_decision.png)
    
-   **Input / Output (Entrada/Salida):** Indica el proceso de entrada o salida de datos externos. Esto se indica por la forma de un paralelogramo.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7df9c64e4c7688a3db77_input-output.png)
    
-   **Comentario**: Indica información adicional sobre un paso en un proceso.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7df944917af38eb17aac_annotation.png)
    
-   **Proceso predefinido:** muestra el proceso con nombre que se define en otro lugar.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfa36c9b66e7a0cd717_predefined-process.png)
    
-   **Conector en la página:** se utilizan pares de conectores en la página para reemplazar líneas largas en una página de diagrama de flujo.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfac64e4c423ba3db79_on-page-connector.png)
    
-   **Conector fuera de página:** se utiliza un conector fuera de página cuando el objetivo está en otra página. Lea nuestra guía de conectores de diagrama de flujo para obtener más información sobre cómo funcionan los conectores dentro y fuera de la página.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfa6eedb7bb3780d738_off-page-connector.png)
    
-   **Demora**: Cualquier período de demora que sea parte de un proceso  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfb9bf8a80bf95dddfe_delay.png)
    
-   **Proceso alternativo:** un paso alternativo al proceso normal. Las líneas de flujo a un bloque de proceso alternativo generalmente están discontinuas.  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfbb051731a033d02c1_alternate-process.png)
    
-   **Datos:** entrada o salida de datos  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfb9e0b7435efda82a8_data.png)
    
-   **Documento**: Un documento  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfb8976874cd69796cc_document.png)
    
-   **Multi-documento:** Múltiples documentos  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfcc64e4c0724a3db7b_documents.png)
    
-   **Preparación**: un paso de preparación  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfb44917a6c93b17aad_preparation.png)
    
-   **Pantalla**: una pantalla de máquina  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfc80fb34486552a359_display.png)
    
-   **Entrada manual:** datos o información en un sistema  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfcd2a026e5971409ea_manual-input.png)
    
-   **Operación manual**: un paso del proceso que no está automatizado  
    ![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618b7dfc6f9d88dacc8d4b12_manual-operation.png)
    

### Los símbolos más comunes utilizados en un diagrama de flujo:

![enter image description here](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/618c7f7af1a294cd78ef2073_Untitled-Document-1024x385.png)

## Pseudocodigo.

### Definicion:

Un pseudocódigo es una forma de expresar los distintos pasos que se deben realizar en un programa, esto de manera parecida a como se puede observar en un lenguaje de programación. Básicamente, se busca representar por pasos la solución a un problema o un algoritmo. En este caso se utilizará PSeInt para realizar pseudocódigo y al mismo tiempo flujogramas.

### PSeInt

En PSeInt para indicar el inicio de un pseudocódigo se utiliza la palabra reservada **Algoritmo** seguido del nombre que se le desea dar al pseudocódigo, tal como se muestra en la imagen.  
**![](https://lh5.googleusercontent.com/h7dJS46kY3WkEt03PbeGxSPcY5m7uEgGspsCAd1rJppIeDCqhgzhjbgRS2B5d_zkiDVFHFNH7_KmmlxOsNjVLkk2dl1KrJxUg4_gNvtUAvQauVtsyh6A0zNmP8tClG79NX_E_-4jsSXBC44zJsNPo0k)**
Para mostrar un mensaje en pantalla se utiliza la instrucción **Escribir** seguido del texto que se desea mostrar, dicho texto debe ser escrito entre comillas.  
También se pueden capturar datos del usuario a través de la instrucción **Leer** junto al nombre con el cual se desea guardar la información solicitada. Dicho nombre donde se guarda, se le conoce como variable y esta puede tomar diferentes valores.

**![](https://lh3.googleusercontent.com/ilHPB7rRZB5uabEKzcMf1JenrAl9GbhBkmvOMXC25-eGM77ixh040XYlyyu-SR9_Kw-TC3-O2kJ1YIpAD5pFHCcIdYXy90aomqdJ5b4z9SJkmdq3Rn3NUuhU9gJB7jLfahQokhawNBXoMLHH4iqxBk4)**
Al momento de ejecutar el pseudocódigo se muestra un apartado con el símbolo “>”, el cual indica que se está solicitando algún dato al usuario.  
**![](https://lh6.googleusercontent.com/iD-oHgkpqySLhRXd-zQrh4eNziwsQn6rt8PcPzyZQ3c5fbkAQCHDJdZjpWASbgWO5cZP0c0DpUy4o-e-pt0NtIkEeKfwdHhAulV7zBOWIQOGQ0f72BF7kCfP8XAzHKsakeAJwtYIX8j7SspZRXfUJoU)**

Luego de tener almacenado un dato en una variable se puede mostrar en pantalla de dos maneras, ya sea únicamente el valor de la variable, o concatenado de algún texto que se desee.
Para mostrar únicamente el valor de la variable se debe utilizar **Escribir** seguido del nombre de esta.
**![](https://lh6.googleusercontent.com/BqGb2lF0D2cclDTvR8q7SX6GYqQq_dnIFCmaJh1u4adP3BxE-1bJ2-yA6lSRNQOAn2OTt2sQW5qKSpOpWuYJ3aXQph91j3P-WIC-noVNgPCG-sgg0ZFhHLkb7KGneFo___fkuHGucg3FtEjeDAyKtMY)**

Para concatenar una variable con un texto, se debe utilizar la **coma** (,) como separador, tal como se muestra en el ejemplo.

**![](https://lh5.googleusercontent.com/Lx_KK7sbHQZ6v0c3N63ohuYMC0zgknhBrL2qxXKDEcaItMCEfo4EQtION10iAStQ6-SJfRnsfARZstwLwIX5gFuXhXNs5aNWfVkLAORqGuV42ajh5VlyVcX7bvterOZmDofXToHpxvnIvNO0V9LnpyU)**
Los resultados esperado son:

Opcion 1
**![](https://lh5.googleusercontent.com/NURyhGZPxRYUp0xzOnmAC7w8SccxZ_1ZdKBM0NZ-pXL8Sr6IEMn4nNru1zY_2uvnguR9YGmjJbFFpgeqhhzE0DdyFuvtScyf6V2tZz7aLrWecxdWZDOc1RX3vYpJf0s9eLwM5-6O51B9CMvOz1H4pBk)**

Opcion 2
**![](https://lh6.googleusercontent.com/ayW2FTAPXmU4ESA0SPzRBMK4xfxRCOkOUfkmsdBtVsjn7UJVHhAnfAdhWvbwaK_Nsts_1bKSrUUux0qWr35jvIEIUW7KCh3QZRrIrmX2JUT9MDpefzzAtT6wrdTCRvkyj1r6box45rWH6khq9g5mrX0)**
También, para asignar un valor a una variable o para guardar una expresión matemática se utiliza la asignación, la cual tiene la siguiente estructura.  
**![](https://lh3.googleusercontent.com/GnOWTXvszOukVU9J7OFXPbP3mT5mx92DW5dnbJ_9VgIlhXwMVubZd_01J0-a-eIAfxWapbU9n0gclDw9A9kPGtRFhqJ8Ti1A3wNZ8CFkvkt0rVeawuSLo4V0pzt60L7iTsCmU2l7ZQoeBDh9aptw12Q)**
Dentro de PSeInt se pueden utilizar estructuras de control condicionales como un Si-entonces y un Según. Dichas estructuras se utilizan de la siguiente manera:

Segun
**![](https://lh6.googleusercontent.com/cy9-ReLY9dFtlaje2Bux0sWvSjViI-9ZYaYqf3DEmpSXs0z2uXzR0Be2iLXq1ag4QZvptSrxleRXyHI8Hb0XddKYKly55JqmLLPwUSVlw-LPCdfYd6zEyxe5Dc0Bqa4EJNGEUX2jQKe4sOhKUGUe4EU)**
Si-entonces
**![](https://lh4.googleusercontent.com/sQTt9h_vqDUyCs8SwHYsexxTbkflImAd2GyLhfX0n11s8mIpGnm09MZ5a4sWJngjYrWkRyjkEeumIylB3-ikq4Z3wWxlN6R3AueiiEQGZ1O6_tqS5y7oJQtiS6EZshCQWQr4frdyRmKIR8ZY89XsFsg)**

## Ejemplos.

### Ejemplo de Pseudocodigo.

Leer por pantalla dos números. Luego mostrar al usuario el siguiente menú de opciones:

1.  Suma
    
2.  Resta
    
3.  Multiplicación
    
4.  División  
    ![enter image description here](https://user-images.githubusercontent.com/54318914/224464592-60314dd2-5bb8-4159-bf6f-7fb72a46a321.png)
    

### Ejemplo de Flujograma.

Realizar un diagrama de flujo que le permita al usuario ingresar 4 valores para la variable de sumar el primer número con el cuarto, multiplicar el segundo número con el tercero, presentar ambos resultados y finalizar

![enter image description here](https://user-images.githubusercontent.com/54318914/224466180-26affc87-30e0-4171-afb4-3f7487d26972.png)

## Ejercicio Evaluado.

1.  Accede a la tarea que está en Moodle llamada cp2
2.  Busca tu nombre y acepta la tarea
3.  Clona el repositorio   
4.  Utiliza las herramientas sugeridas-
5.  Realiza el ejercicio que asigne el instructor/a.    
6.  Puedes verificar en tu repositorio de GitHub los cambios que realizaste al código.
7.  Borrar las credenciales de windows    
8.  Borrar de la computadora el o los programas creados durante la práctica
  


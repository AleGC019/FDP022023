
# **Instrucciones de control de flujo: sentencias para la toma de decisiones simples y múltiples**

## **Introducción**

Las estructuras de control de flujo son elementos clave que permiten a los desarrolladores crear soluciones más complejas y sofisticadas. Estas estructuras de control son herramientas que permiten definir cómo un programa debe ejecutarse y cómo debe reaccionar a ciertas situaciones.

Uno de los conceptos fundamentales en programación y más específicamente en las estructuras de control, es el uso de condicionales, que permiten crear soluciones dinámicas y adaptativas. Los condicionales permiten que un programa tome decisiones basadas en ciertas condiciones o criterios, lo que puede ser esencial para que la aplicación funcione correctamente. Entre los condicionales más utilizados en la programación se encuentran if, else y switch-case, que permiten definir distintos caminos de ejecución según ciertas condiciones.

En esta introducción, exploraremos los fundamentos de los condicionales en programación y cómo se utilizan en el desarrollo de aplicaciones.

## **if-else**

El condicional if-else es una estructura de control que permite a los programadores crear soluciones dinámicas y adaptativas en sus programas. Esta estructura de control se utiliza para tomar decisiones basadas en ciertas condiciones o criterios.

**![](https://lh6.googleusercontent.com/yzgenbWUZBWuthOPZ2cFYsXzKI8s-nPg83cGa0OQMCq3HhvEugGx2riuOutG2jIwRqIcIlvgJWMDB76fCYloXAbyaamzvJZdfninkbaLbHysTnCJYEW2ZFOS0WwjVLQP00-4UWHuUA-dkQC7W74jUSU)**

La sintaxis básica del condicional if-else en C++ es la siguiente:

**![](https://lh5.googleusercontent.com/Wq6DlYq-Y5Cak5wSizfSBF_2qDrIpbpXGP5ayz_k2yopdi9h7Alt1kyfiaXxsh1IiA3Whx-yOzBXOX0XVaRZAtxhemcWTIlpCoPAYAfe8Dc6Mh7q_dkNXYFp-y-qy0Pjg8SsWbDwmXtuE2pRj5WSwIE)**

En esta estructura, la condición es una expresión booleana que se evalúa como verdadera o falsa. Si la condición es verdadera, se ejecuta el código dentro del bloque de código del if. Si la condición es falsa, se ejecuta el código dentro del bloque de código del else.

Un ejemplo sencillo de uso del condicional if-else en C++ es el siguiente:

**![](https://lh4.googleusercontent.com/5tqIyQNqChyhGuaKLgJTyNu1HXugFOFmRuqsrGX2w5QApNNXS2Py3mx8ckQDAr02x-xQD2s9PghHbjjtV6iDCKZVHcE5X8G2EB8bCHjBcXt29GWZgth--xNzn2sbYv_gyfuAeJjD_gisHNMtQ_3XWnk)**

En este ejemplo, se pide al usuario que ingrese su edad y se utiliza un condicional if-else para determinar si es mayor o menor de edad. Si la edad es mayor o igual a 18, se imprime “Eres mayor de edad”, y si es menor de 18, se imprime “Eres menor de edad”.

El condicional if-else en C++ también admite anidamiento, lo que significa que se pueden utilizar varios condicionales if-else en el mismo bloque de código. Esto puede ser útil para crear soluciones más complejas y sofisticadas en programas de mayor envergadura.

## else-if

El else if es una estructura de control utilizada en muchos lenguajes de programación para especificar una condición adicional a una declaración if. Esta estructura permite evaluar varias condiciones de manera secuencial y tomar diferentes acciones dependiendo de cuál sea verdadera.

**![](https://lh4.googleusercontent.com/30OFP50t5UE1jn-J_RUuQyt9feFILLdS2zdpp9WOVvxhG_jGVCrkfDdbslt1KoF_pECYzEvIxoHx69dQLm1Uc0atpclxlIG5bakDqRVRgnL0zVput7MsGPLwTAp-riUxY8lQzE5QeIZmErTQsMyNkys)**

La sintaxis básica del else if es la siguiente:

**![](https://lh4.googleusercontent.com/dZN3kR7CI-O68NMdDxcu1hzR1HAGFMw6LLdbt4lY0t-IbcP9Sx8IkiO4lkwljTCQWLGB5Q0hLdnQ5Nxm8CTT6N6Grf6kUVYLi7soNcT62UgCvjcvzoUqueNRQzKHu3dyds3yJGwt1FC82sy9onWEa1U)**

En este ejemplo, se evalúa la condición1 en primer lugar. Si es verdadera, se ejecuta el código dentro del bloque if. Si no lo es, se evalúa la condición2. Si es verdadera, se ejecuta el código dentro del bloque else if. Si ninguna de las condiciones anteriores es verdadera, se ejecuta el código dentro del bloque else.

Es importante tener en cuenta que solo se ejecutará el código correspondiente al primer bloque que cumpla una condición verdadera. Si se utilizan múltiples declaraciones else if, se evaluarán de manera secuencial hasta encontrar una condición verdadera o hasta llegar al bloque else.  
**![](https://lh6.googleusercontent.com/GV2Lg5nR7fptamvlIX2FLMRtlJLY-uPZDoiVkPnbiAvefsLE3hXtGxvam8G59IeIe5mIisswL5Gt5QDm1cuGPqRlNAeB0DghBBYUWOreCSlzRPf0J7ygR3Z7qYwgsedZlFrgsfpB3ftzCp-gd_ZUji0)**

## Switch

La estructura switch también se utiliza para evaluar varias condiciones y tomar diferentes acciones en función de cuál sea verdadera. La sintaxis básica de switch es la siguiente:  
**![](https://lh6.googleusercontent.com/aZ31BYT23EI8qy1YNiL_vWh1sW3WCtCme79__rUzpFA6QTIZWb4Cehp2ZyJLWEe_ad3lU4H6b45EV_tn2MlPTRolPNMq2mS-LolhywPjl3MO6BYaTl8mKbX2MFip2auGquoJVmNRjf0NI6cE9HGi3rA)**

La expresión se evalúa una vez, y el flujo de control se dirige al caso correspondiente. Si ningún caso coincide con el valor de la expresión, se ejecuta el bloque default. Es importante tener en cuenta que cada caso debe finalizar con una sentencia break, de lo contrario, se ejecutarán todos los casos siguientes hasta que se encuentre un break.

A continuación se muestra el mismo ejemplo anterior, pero usando la estructura switch en lugar de else if:  
**![](https://lh6.googleusercontent.com/ByUmzQaEQA4XbPvf_VeCDkp7btni_N85yrtDRot48HbCQIcJBDrKGBrfJxWd-IBxduh89WBykN0gCf4rN_dUj_zUXAXUrgSWO10FVpvNSgDOOjL7U5DxXryXdCNB2ZrUCKHo7askJqOo9ijBYlYD4Q)**

En este ejemplo, la variable calificación se establece en 80. Se utiliza una estructura switch para evaluar la calificación y determinar la letra correspondiente. Cada caso tiene un rango de valores (90…100 para A, 80…89 para B, y así sucesivamente) y si la calificación cae dentro de ese rango, se ejecutará el código correspondiente. Si la calificación no coincide con ningún caso, se ejecutará el bloque default. En este caso, la calificación es mayor o igual a 80, por lo que el caso correspondiente es 80…89, y se imprime “La calificación es B”. Si la calificación fuera mayor o igual a 90, se imprimiría “La calificación es A”, y así sucesivamente.

No solamente se pueden usar números para utilizar las condicionales, a continuación se presenta un ejemplo utilizando string.  
**![](https://lh6.googleusercontent.com/BI8abLaG7woqfls4FlpE-SLs5TB28GGogtYOQtgxdNvnPAAfbSd4TM7TVm33g9adljK3eq4N_nZtcZLGSQseY3ibleylRuaZmyCVB-EfaHTyKe_AkVH51tM5WtQuFJhH4kPkad3Dz-_922Q0mkOlSlQ)**

## Ejercicio Evaluado

1.	Accede a la tarea que está en Moodle llamada cp3

2.  Busca tu nombre y acepta la tarea

3.  Clona el repositorio

4.  Realiza el ejercicio que asigne el instructor/a.

5.  Puedes verificar en tu repositorio de GitHub los cambios que realizaste al código.

6.  Borrar las credenciales de windows

7.  Borrar de la computadora el o los programas creados durante la práctica


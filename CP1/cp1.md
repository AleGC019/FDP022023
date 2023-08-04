
# Introducción a GIT

En este codelab aprenderás sobre los conceptos de git, Github, como utilizarlos y sus diferencias a través de ejercicios prácticos.

### Bienvenido

En esta guía aprenderás sobre que es Git y Github, sus diferencias y como utilizarlo.![Git + Github](https://editor.analyticsvidhya.com/uploads/18288git.jpg)

## Sistema de control de versiones

![Versiones de proyecto](https://www.espai.es/blog/wp-content/uploads/2018/09/desastre.png)

Las aplicaciones de control de versiones nos permiten administrar las diferentes versiones de uno o varios archivos y en cualquier momento se puede acceder a cualquier versión del pasado y verificar cuales fueron los cambios, quien los realizo, a que horas y fecha se realizo esa modificacion.Existen muchos Sistemas de Control de Versiones siendo algunos de los mas conocidos CVS, Git, Subversion, Mercurial y Bazaar.

![Sistema de control de versiones](https://umangsoftware.com/wp-content/uploads/2021/04/Blog-05-1024x510.png)  
**Leer mas: [Sistema de control de versiones que son y por que amarlos](https://medium.com/@jointdeveloper/sistemas-de-control-de-versiones-qu%C3%A9-son-y-por-qu%C3%A9-amarlos-24b6957e716e)**

## GIT

Es un sistema de control de versiones distribuido (VCS), que permite almacenar diferentes versiones de uno o varios archivos para que cualquier versión sea recuperable cuando lo desee.

**Nota:** Git en realidad es un sistema de control de versiones distribuido, lo cual significa que se realiza una copia completa del repositorio que contiene la base de código en tu computadora (y en la de todos los demás). Realizas cambios en tu propia copia, y luego empujas esos cambios nuevamente al servidor, donde un administrador decidirá si fusiona tus cambios con la copia maestra. - MDN Mozilla  
![Como funciona Git](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQK6NS8w4EqFsvor_JM-sK29ztzjVd9QE2VAg&usqp=CAU)  
******Leer más:**** [documentacion de Git](https://docs.github.com/es/get-started/using-git/about-git)**

## GitHub

Es una plataforma web que permite alojar proyectos, utilizando el sistema de control de versiones distribuidos de GIT, su interfaz gráfica lo ha convertido en uno de los clientes Git más utilizados por los desarrolladores.  
![GitHub](https://global-uploads.webflow.com/5f5a53e153805db840dae2db/6073fbf151fa4565d48572dc_GitHub_aprender-programaci%25C3%25B3n.jpeg)**Enlace del sitio oficial: [GitHub](https://github.com/)**

## Iniciando en GitHub

### Creacion de cuenta

Acceder al sitio oficial de **[GitHub](https://github.com/)**, crear una cuenta de usuario, de preferencia utiliza tu correo electrónico institucional.

![Pagina Oficial de GitHub](https://www.softzone.es/app/uploads-softzone.es/2022/08/web-github.jpg)  
Una vez creada la cuenta, completa tu perfil coloca tu nombre y foto.  
![Perfil de Git](https://static.platzi.com/media/user_upload/Screenshot_2020-07-11%20iKenshu%20-%20Overview-d0af7b93-4f8f-4077-87dd-dbb7812f65b8.jpg)

### Instalando Git

Antes de empezar a utilizar Git, debemos instalarlo en nuestra computadora. Si ya está instalado, puedes actualizarlo a su última versión.

Enlace a sitio oficial: **[Git](https://git-scm.com/)**  
![Descarga de Git](https://www.testingdocs.com/wp-content/uploads/Git-Download-Windows-11-OS.png)  
  
  
**Verificar Instalación**  
Para verificar si la instalación se realizó de manera exitosa.  
Ejecutar el siguiente comando: _**git --version**_

![Version de Git](https://linuxhint.com/wp-content/uploads/2022/09/image12.png)

### Estados en Git

-   Confirmado (committed): la información está almacenada en la base de datos local.
-   Modificado (modified): un archivo ha sido modificado, pero se han confirmado a la base de datos.
-   Preparado (staged): se ha marcado un archivo modificado en su versión actual para enviarlo a la próxima confirmación.  
      
    

![Estados en Git](https://miro.medium.com/max/686/1*diRLm1S5hkVoh5qeArND0Q@2x.png)  
  
  
  

### El flujo de trabajo básico de Git

![Flujo de trabajo](https://support.nesi.org.nz/hc/article_attachments/360004194235/Git_Diagram.svg)  
**Leer mas: [estados de Git](https://moisesdelacruz.medium.com/tutorial-b%C3%A1sico-de-git-y-github-42e46ff41194)**  
**Ver video: [Git status](https://www.youtube.com/watch?v=SxmveNrZb5k)**

### Comandos

Comando SVN

Comando Git

Comportamiento en Git

**status**

status

_Informar el estado del arbol de trabajo_

**add**

add

_Requerido para agregar cada ruta antes de realizar un commit_

**commit**

commit

_Almacenar los cambios deseados en el historial de revision local_

**rm, delete**

rm

_Preparar rutas para su eliminacion en el proximo commit_

**move**

mv

_Prepara el contenido reubicado para el proximo commit_

**checkout**

clone

_Adquirir la historia completa de un proyecto localmente por primera vez_

branch

_Crear contexto local para commits_

merge

_Unir historiales de ramas y cambios al arbol de trabajo_

log

_Enumera el historial de versiones para la rama actual_

push

Sube todos los commits de la rama local a GitHub

pull

_Descarga e integra el historial del repositorio de GitHub_

fetch

Descaga el historial del repositorio de GitHub sin realizar ninguna otra accion

**Leer mas: [comandos git](https://drive.google.com/file/d/1sAYpx-N9RcNDpeurbF8m7gggJsdgt_pX/view?usp=sharing) **

## Commit

Se usa para confirmar los cambios en el área de preparación y guardarlos en el repositorio local en Git.

Algunas buenas prácticas:

1.  Especifica el tipo de commit:  
    **feat:** La nueva característica que agregas a una aplicación en particular  
    **fix:** Un parche para un error  
    **style:** Características o actualizaciones relacionadas con estilos  
    **refactor:** Refactorizar una sección específica de la base de código  
    **test:** Todo lo relacionado con pruebas  
    **docs:** Todo lo relacionado con documentación  
    **chore:** Mantenimiento de código regular.
2.  Quita signos de puntuación innecesarios.
3.  Usa mayúsculas al inicio del título y por cada párrafo del cuerpo del mensaje.
4.  Usa el cuerpo del mensaje para explicar los cambios.
5.  Sigue la convención del mensaje de commit definida por tu equipo.
6.  Agrega emojis a tus commit, debes buscar el emoji que describa lo realizado.

![enter image description here](https://apero-tech.fr/wp-content/uploads/2021/03/gituoji-1024x522.jpg)

**Enlace: [Gitmoji](https://gitmoji.dev/)**

## Ejemplo Practico

### Clona un repositorio y sube los cambios

Crear un directorio en alguna ubicación de tu computadora, en este caso se creó una en el escritorio llamada MiPrimerClonacion.

![enter image description here](https://user-images.githubusercontent.com/62765904/225068714-be887ac9-4343-470e-bc90-b6f248691a1d.png)

Abre una consola en la ubicación de la carpeta llamada MiPrimerClonacion.

### Clonando

Copia la url del repositorio  
![enter image description here](https://user-images.githubusercontent.com/62765904/225068943-0c9a2d60-b62d-4312-9ad7-48daf7836985.png)

Una vez copiada la url del repositorio nos dirigimos a la consola y escribimos el siguiente comando:  
**git clone \[url del repositorio\]**

En este paso se copia la dirección utilizando el comando y clonara el proyecto del repositorio a tu carpeta.

![enter image description here](https://user-images.githubusercontent.com/62765904/225069195-32dddb50-7818-4db3-851f-73bd91e6efa4.png)  
![enter image description here](https://user-images.githubusercontent.com/62765904/225069238-2e8932ae-2c90-42bf-a7e9-78febdef4f68.png)

**Crea un archivo txt con tu nombre.**  
En el contenido del archivo también coloca tu nombre.  
![enter image description here](https://user-images.githubusercontent.com/62765904/225069570-2d83e7fe-e9a6-4c6b-971e-fd695d54a2c6.png)

### Iniciando a subir los archivos

**Configuración:** al ser primera que se realizará un cambio en el repositorio, solicitara los siguientes datos en la terminal que abrió al principio

-   **git config --global [user.name](http://user.name) “\[nombre apellido\]”**
-   **git config --global user.email “\[email\]”**

![enter image description here](https://user-images.githubusercontent.com/62765904/225069885-f90a7c38-87c1-4715-ac21-7c710d8cdc08.png)

### Agregando archivos

Agregamos el nombre del archivo del proyecto al cual le realizamos las modificaciones.

-   **git add \[nombre del archivo\]**

![enter image description here](https://user-images.githubusercontent.com/62765904/225069943-5fcb3886-3198-4d32-8f6a-d47539274cac.png)

### Commit

Agregamos el commit con un mensaje descriptivo de lo que se ha realizado, toma en cuenta las buenas prácticas, puedes usar [Gitmoji](https://gitmoji.dev/) pero revisa cual es el más descriptivo para lo que has realizado a tu proyecto.

**IMPORTANTE: Puedes hacer varios commit, por cada modificación considerable puede realizar un commit, esto permitirá tener un registro de todo lo que vas realizando en el proyecto.**

-   **git commit -m "comentario"**

![enter image description here](https://user-images.githubusercontent.com/62765904/225069989-ce2721f5-2d63-45a1-b534-847d0d53ce3e.png)

### Push

Envía tus cambios al repositorio.

-   **git push**

En este paso si solicitara autenticación, realizarla con el navegador.  
![enter image description here](https://user-images.githubusercontent.com/62765904/225070737-27d7cc6c-1f1f-45d7-bd84-23db11aa43c8.png)

![enter image description here](https://user-images.githubusercontent.com/62765904/225071889-6a665906-0f9a-4016-a475-e9836c55de35.png)  
Verificar su repositorio en GitHub, mostrará los nuevos archivos que se han agregado.

**FELICIDADES!!!**  
![enter image description here](https://user-images.githubusercontent.com/62765904/225071941-595d4ee2-58a3-4388-bb74-98e2390d0ed3.png)



## Ejercicio Evaluado

1.  Crea una cuenta en github con tu cuenta institucional
2.  Accede a la tarea que está en Moodle llamada cp1
3.  Busca tu nombre y acepta la tarea
4.  Clona el repositorio
5.  Agrega un archivo de texto
6.  Crea una rama en el repositorio clonado y sube los cambios a esa rama
7.  Sube los cambios al repositorio utiliza los comandos en el orden correcto (git add, git commit, git push), mínimo de commit 3
8.  Realiza la fusión de la rama con el main
9.  Puedes verificar en tu repositorio de GitHub los cambios que realizaste al código.
10.  Borrar las credenciales de windows

Borrar de la computadora el o los programas creados durante la práctica.

**IMPORTANTE:** borrar las credenciales de Windows.

![enter image description here](https://ajaxhispano.com/images/content/15381198/ec678c8b0e69b04c3865918954e7a7a4.png)

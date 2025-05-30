# Tarea 3

Este repositorio contiene 2 programas en C diseñados para demostrar habilidades fundamentales en programación, incluyendo manipulación de cadenas, manejo de archivos y control de flujos de E/S.

## Herramientas necesarias

### 1. Manipulación de Cadenas

Este programa interactúa con el usuario para realizar las siguientes operaciones sobre una cadena de texto:

* **Entrada de String:** Recibe una cadena de texto proporcionada por el usuario.
* **Conteo de Caracteres:** Solicita al usuario un carácter específico y cuenta cuántas veces aparece ese carácter dentro de la cadena ingresada.
* **Inversión de String:** Imprime la cadena original con todos sus caracteres en orden inverso.

**Características destacadas:**
* Uso de `fgets` para una entrada de cadena segura que maneja espacios.
* Demostración de bucles para iteración de cadenas y lógica condicional.

### 2. Procesamiento de Números desde Archivos

Este programa está diseñado para leer y procesar números desde un archivo de texto, gestionando tanto entradas válidas como inválidas:

* **Lectura de Archivo:** Lee líneas de un archivo de texto, esperando un número por línea.
* **Validación de Números:** Utiliza una función personalizada y `isdigit` de `ctype.h` para determinar si una línea contiene un número entero válido (incluyendo números negativos y positivos).
* **Salida Estándar (`stdout`):** Imprime los números válidos encontrados en el archivo a la salida estándar, con un formato específico (ej. `Número: '123'`).
* **Salida de Error Estándar (`stderr`):** Si una línea no contiene un número válido, se imprime un mensaje de error descriptivo a la salida de error estándar (ej. `Error - Línea inválida: 'abc'`).
* **Redirección de E/S:** El programa está diseñado para funcionar fluidamente con la redirección de salida del shell, permitiendo guardar los números válidos en un archivo (`output.txt`) y los mensajes de error en otro (`error.txt`).

**Características destacadas:**
* Manejo de archivos (`fopen`, `fclose`, `fgets`).
* Control de flujo de errores y validación de datos.
* Uso de `stdout` y `stderr` para diferenciar tipos de salida.
* Preparado para trabajar con redirección de E/S en la línea de comandos.

## Herramientas Utilizadas

* **Lenguaje de Programación:** C
* **Compilador:** GCC (GNU Compiler Collection)
* **Bibliotecas Estándar de C:**
    * `stdio.h`: Para operaciones de entrada/salida (e.g., `printf`, `fgets`, `fopen`, `fclose`, `fprintf`).
    * `string.h`: Para manipulación de cadenas (e.g., `strlen`, `strcspn`).
    * `stdlib.h`: Para funciones de utilidad general (e.g., `atoi` para conversión de string a entero).
    * `ctype.h`: Para clasificación de caracteres (e.g., `isdigit` para verificar si un carácter es un dígito).
* **Entorno de Ejecución:** Terminal/Línea de comandos para compilación y ejecución, utilizando características como la redirección de salida (`>`, `2>`).

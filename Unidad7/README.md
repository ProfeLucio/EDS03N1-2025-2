## Gestión de Memoria Dinámica y Listas Enlazadas (Sistema de Tiquetes de Avión)

Este taller busca aplicar los conceptos de **manejo de memoria dinámica** y **listas enlazadas** vistos en clase, mediante la creación de un simulador de gestión de venta de tiquetes y abordaje de un avión en el lenguaje **C**.

***

### 1. Requisitos del Programa

El programa debe gestionar el proceso de venta de tiquetes y abordaje, cumpliendo con las siguientes especificaciones:

* **Capacidad y Sobreventa:**
    * El programa debe solicitar al inicio la **capacidad máxima de pasajeros** del avión.
    * Se podrán vender tiquetes hasta un **10% más** de esta capacidad (ley de sobreventa).
* **Datos del Pasajero:** Se requiere almacenar únicamente:
    * **Género:** (Opciones: Femenino, Masculino, No Binario).
    * **Primer Apellido.**
* **Proceso de Abordaje:**
    * Los pasajeros abordarán en el **orden estricto de venta de sus tiquetes**.
    * El abordaje se detiene al alcanzar la **capacidad máxima declarada** del avión (ignorando el 10% de sobreventa).
* **Restricción:** Después de iniciar el proceso de abordaje, **no se permite la venta de tiquetes adicionales**.

***

### 2. Funcionalidades del Menú

El programa debe operar a través de un menú que implemente las siguientes opciones:

1.  **Establecer Capacidad:** Define la capacidad máxima del avión. (Solo debe hacerse una vez al inicio).
2.  **Vender Tiquete:** Registra un nuevo pasajero, siempre que no se haya superado el límite de sobreventa y el abordaje no haya iniciado.
3.  **Iniciar Abordaje:** Ejecuta el proceso de abordar hasta la capacidad permitida. Esta acción **deshabilita permanentemente** la venta de tiquetes.
4.  **Ver Abordados:** Muestra la lista de pasajeros que lograron subir al avión.
5.  **Ver No Abordados:** Muestra la lista de pasajeros que compraron tiquete pero no pudieron abordar.
6.  **Salir.**

***

### 3. Requisitos de Entrega (Git/GitHub) 

El trabajo debe ser publicado a través de GitHub, siguiendo estas directrices:

* El código fuente debe subirse a un **repositorio de GitHub**.
* **A partir de ahora y hasta el final del curso**, todas las actividades (incluyendo este taller) **solo se recibirán** si se encuentran dentro de un repositorio con el nombre exacto: **`EDN2025`**.

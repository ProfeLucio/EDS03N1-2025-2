## Cómo enlazar tu repositorio de GitHub

Aquí tienes los pasos para enlazar tu repositorio local con uno remoto en GitHub de forma clara y sencilla.

---

1.  **Inicializa tu repositorio local**
    ```bash
    git init
    ```
    Este comando crea un nuevo repositorio de Git en la carpeta de tu proyecto.

2.  **Agrega los archivos para el commit**
    ```bash
    git add .
    ```
    Con esto, todos los archivos de tu directorio de trabajo se añaden al área de preparación, listos para ser guardados en el próximo commit.

3.  **Configura tu información de usuario**
    ```bash
    git config --global user.email "gonzalo.lucio@correounivalle.edu.co"
    git config --global user.name "ProfeLucio"
    ```
    Estos comandos asocian tus futuros commits con tu nombre y correo electrónico.

4.  **Realiza el primer commit**
    ```bash
    git commit -m "Commit inicial para trabajar mi repositorio"
    ```
    Guarda los cambios con un mensaje que describe lo que hiciste.

5.  **Cambia el nombre de la rama principal a "main"**
    ```bash
    git branch -M main
    ```
    La mayoría de los nuevos repositorios usan `main` como nombre de la rama principal, y este comando lo estandariza.

6.  **Enlaza el repositorio remoto**
    ```bash
    git remote add origin [https://github.com/ProfeLucio/EDS03N1-2025-2.git](https://github.com/ProfeLucio/EDS03N1-2025-2.git)
    ```
    Conecta tu repositorio local con el repositorio de GitHub usando el alias `origin`.

---

¡Listo para empezar! Si necesitas ayuda con algún otro comando, no dudes en preguntar.
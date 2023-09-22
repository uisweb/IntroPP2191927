# Instrucciones de compilación y ejecución

Multiplicación de Matrices 

Solución secuencial

Iniciada la sesión en Guane y accediendo a través del Comando shh se procede con el comando cd para crear la carpeta Matriz,
una vez creada la carpeta matriz se procede a crear un archivo .c el cual contiene el nombre MatrixMultiplicación
y el código de la solución secuencial usando la línea de comando gcc -Wall -fopenmp -std=c99 omp MatrixMultiplication.c -o salida_Matrizomp. 
Luego accedemos al archivo mediante salida ./salida_Matriz y obtenemos los valores resultantes de la matriz. 


![Time_Ejecution_MatrixMultiplication](https://github.com/uisweb/IntroPP2191927/assets/104944902/fae2ad6e-950c-464b-8dec-a3a9939db5dc)



 Solución paralela en omp

Para la solucion paralela en omp se procede a crear un archivo .c el cual contiene el nombre de ompMatrixMultiplication 
y el código de la solución. Luego usando la línea de comando gcc -Wall -fopenmp -std=c99 ompMatrixMultiplication.c -o salida_Matrizomp,
se accede al archivo y haciendo uso de la salida ./salida_Matrizomp obtenemos los valores de la matriz resultante.


![Time_Ejecution_ompMatrixMultiplication](https://github.com/uisweb/IntroPP2191927/assets/104944902/e0a42f59-961a-4fbd-b163-72598ccc9815)


 Comparaciones de tiempos de ejecución

 Una vez compiladas las dos soluciones secuencial y solución paralela obtenemos que el tiempo de ejecución para la primera es de 0.000264 segundos
 mientras que para la segunda solucion nos toma un tiempo de 0.003933 segundos. 

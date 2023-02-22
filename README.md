# LAB01-PARALELA
Descargar o clonar el respositorio
'''
git clone https://github.com/andreamalin/LAB01-PARALELA
'''

## Ejer 1
Pasos para ejecutar:
1. Dirigirse a la carpeta descargada
2. Dirigirse al ejercicio a querer compilar
3. Correr el comando gcc
```
cd ./LAB01-PARALELA
cd '.\ejer 1'
gcc -o ejer1 .\piSeriesNaive.c -fopenmp
./ejer1 n threads
```
Donde n es la cantidad de veces a realizar el ciclo y threads es la cantidad de hilos a utiizar
El codigo secuencial (pSeriesSeq.c) solo recibe la cantidad n
Y, el inciso h recibe un tercer parámetro block_size
<hr>

## Ejer 2
```
cd ./LAB01-PARALELA
cd '.\ejer 2'
gcc -o ejer2 .\piSeriesAlt.c -fopenmp
./ejer2 n threads
```
Donde n es la cantidad de veces a realizar el ciclo y threads es la cantidad de hilos a utiizar
El codigo secuencial (piSeriesAlt_seq.c) solo recibe la cantidad n
Y, el piSeries_dynamic.c recibe un tercer parámetro block_size
<hr>

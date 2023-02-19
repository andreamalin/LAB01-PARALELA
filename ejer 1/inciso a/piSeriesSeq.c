#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[]){
    double t_init = omp_get_wtime();

    int n;

    double factor = 1.0;
    double sum = 0.0;

    if(argc>1) {
        n = strtol(argv[1], NULL, 10);
    }

    for (int k = 0; k < n; k++) {
        sum  += factor/(2*k+1);
        factor = -factor;
    }

    double pi_approx = 4.0*sum;

    double t_fin = omp_get_wtime();
    double delta = t_fin - t_init;

    printf("\n\nCon n threads = 1 y con n = %d", n);
    printf("\n\nCon tiempo = %f",delta);
    printf("\nCon precision = %f", omp_get_wtick());
    printf("\nCon pi = %f", pi_approx);

    return 0;
}
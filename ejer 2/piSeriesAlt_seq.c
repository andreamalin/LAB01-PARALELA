#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void calculate_pi(void);
int main(int argc, char* argv[]){
    double t_init = omp_get_wtime();

    int n;

    double factor = 1.0;
    double sum = 0.0;

    if(argc>1) {
        n = strtol(argv[1], NULL, 10);
    }


    for (int k = 1; k < n; k +=2) {
        sum  += (1.0/((2.0*(k-1.0)) + 1.0)) - (1.0/((2.0*k) + 1.0));

    }

    double pi_approx = 4*sum;

    double t_fin = omp_get_wtime();
    double delta = t_fin - t_init;

    printf("\n\nCon n threads = %d y con n = %d",1, n);
    printf("\n\nCon tiempo = %f",delta);
    printf("\nCon precision = %f", omp_get_wtick());
    printf("\nCon pi = %lf", pi_approx);

    return 0;
}
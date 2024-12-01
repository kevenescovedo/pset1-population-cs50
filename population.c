#include <cs50.h>
#include <stdio.h>

int main(void) {
      int population_start;
      do {
       population_start = get_int("População Inicial: ");
      } while(population_start < 9);

      int population_end;
      do {
       population_end = get_int("População Final: ");
      } while(population_end < population_start);
      int n =  population_start;
     int years = 0;
     while(n  < population_end) {
        n = n + ((n/3) - (n/4));
        years ++;
     }

     printf("Years: %i \n",years);
}

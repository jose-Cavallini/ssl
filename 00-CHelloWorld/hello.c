

#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   FILE *Flujo = fopen ( " ouput.txt " , " wb " );
   fprintf (Flujo, " Hola mundo. fprintf " );
   return 0;
}
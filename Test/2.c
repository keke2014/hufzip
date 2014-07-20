#include <stdio.h>

int main()
{  // Generate test file '2.txt'
    int i, j, max = 256;
    FILE *ofile = fopen("2.txt", "a");
    for (i = 0; i < max; ++i)
       for (j = 0; j <= i; ++j) 
       {
         fprintf(ofile, "%d", i);
       }
}

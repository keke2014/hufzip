#include <stdio.h>

int main()
{ // Generate test file '1.txt'
    long i, max = 1024*1024;
    FILE *ofile = fopen("1.txt", "a");
    for (i = 0; i < max; ++i)
        fputc('a', ofile);
}

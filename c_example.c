#include <stdlib.h>
#include <stdio.h>

void foo(int size)
{
    int* data = malloc(sizeof(int) * size);
    //free(data);
}

void bar(int size)
{
    char *data = malloc(sizeof(char) * size);

    foo(size);
   // free(data);
}
int main(void)
{   
    bar(8);
    bar(16);
    return 0;
}

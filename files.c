#include <stdio.h>

int main ()
{
    FILE * fPointer = fopen("Employees.txt", "a");

    fprintf(fPointer, "\nKelly, Janitor");

    fclose(fPointer);
    return 0;
}

// "w" => Write into a file;
// "a" => Append into a file;
// "r" => Read into a file;
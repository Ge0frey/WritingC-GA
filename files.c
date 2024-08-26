#include <stdio.h>

int main ()
{
    FILE * fPointer = fopen("Employees.txt", "w");

    fprintf(fPointer, "Geofrey, CEO\nJackman, Treasurer\nSally, Accountant");

    fclose(fPointer);
    return 0;
}

// "w" => Write into a file;
// "a" => Append into a file;
// "r" => Read into a file;
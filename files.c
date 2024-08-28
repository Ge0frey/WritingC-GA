#include <stdio.h>

int main()
{

    char line[255];

    FILE *fPointer = fopen("Employees.txt", "r");

    fgets(line, 255, fPointer);

    printf("%s", line);

    fclose(fPointer);
    return 0;
}

// "w" => Write into a file;
// "a" => Append into a file;
// "r" => Read into a file;
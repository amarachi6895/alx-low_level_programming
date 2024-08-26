#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) 
    {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "abc123") == 0) 
    {
        printf("Correct password!\n");
        return 0;
    }
    else 
    {
        printf("Incorrect password.\n");
        return 1;
    }
}

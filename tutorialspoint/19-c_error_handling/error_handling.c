#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main()
{

    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
        exit(EXIT_FAILURE);
    }

    fclose(pf);
    
    exit(EXIT_SUCCESS);
}

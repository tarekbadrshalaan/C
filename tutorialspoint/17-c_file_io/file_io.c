#include <stdio.h>

int main()
{
    // write file.
    FILE *fw;

    fw = fopen("/tmp/test.txt", "w+");
    fprintf(fw, "This is testing for fprintf...\n");
    fputs("This is testing for fputs ... \n", fw);
    fclose(fw);

    // read file.
    FILE *fr;

    char buff1[255];
    fr = fopen("/tmp/test.txt", "r");
    fscanf(fr, "%s", buff1);
    printf("1 : %s\n", buff1);

    char buff2[255];
    fgets(buff2, 255, fr);
    printf("2 : %s\n", buff2);

    char buff3[255];
    fgets(buff3, 255, (FILE *)fr);
    printf("3 : %s\n", buff3);

    char buff4[255];
    fgets(buff4, 255, fr);
    printf("4 : %s\n", buff4);

    fclose(fr);

    // read file2.
    printf("start reader fr2\n");
    FILE *fr2 = fopen("/tmp/test.txt", "r");

    char buff5[255];
    int i = 0;
    while (fgets(buff5, sizeof buff5, fr2) != NULL)
    {
        i++;
        printf("%d : %s\n", i, buff5);
        // process buffer
    }
    if (feof(fr2))
    {
        printf("end of the file fr2\n");
        // hit end of file
    }
    else
    {
        // some other error interrupted the read
    }
    fclose(fr2);

    // read file3.
    printf("start reader fr3\n");
    FILE *fr3 = fopen("/tmp/test.txt", "r");

    char buff6[255];
    int i2 = 0;
    while (fscanf(fr3, "%s", buff6) == 1)
    {
        i2++;
        printf("%d : %s\n", i2, buff6);
        // process buffer
    }
    if (feof(fr3))
    {
        printf("end of the file fr3\n");
        // hit end of file
    }
    else
    {
        // some other error interrupted the read
    }
    fclose(fr3);

    // read file3.
    printf("start reader fr4\n");
    FILE *fr4 = fopen("/tmp/test.txt", "r");

    char buff7[255];
    int i3 = 0;
    while(!feof(fr4))
    {
        fscanf(fr4, "%s", buff7); 
        i3++;
        printf("%d : %s\n", i3, buff7);
    }
    fclose(fr4);

    return 0;
}
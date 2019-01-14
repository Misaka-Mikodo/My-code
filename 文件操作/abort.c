/* abort example */

#include <stdio.h>      /* fopen, fputs, fclose, stderr */


#include <stdlib.h>     /* abort, NULL */


int main ()
{
FILE * pFile;
errno_t err;
err = fopen_s(&pFile, "myfile.txt", "r");
if (err != 0)
{
    fputs("error opening file\n", stdin);
    abort();
}
    fclose (pFile);
    return 0;
}


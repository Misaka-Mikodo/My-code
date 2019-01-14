#include<stdio.h>
#define Dump_Str(s) printf("%s=%s\n",#s,s);
int main()
{
    const char * pchName = "Gui xue";
    Dump_Str(pchName);
}

#include <stdio.h>

int main(void){
    char a[]="my name is test !";

    char b[5],c[5],d[5],e[5],f[5];
    int iRC;

    iRC = sscanf(a,"%s %s i%s t%s %s", b, c, d, e, f);

    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
    printf("%s\n",d);
    printf("%s\n",e);
    printf("%s\n",f);

}

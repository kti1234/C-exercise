#include <stdio.h>

int main(void){
    char a[]="my name is test !";

    char b[5],c[5],d[5],e[5],f[5];
    int iRC;

    /* sscanf 是一个很强大的字符串过滤函数，有很多高级用法，如果需要请自行google */
    iRC = sscanf(a,"%s %s i%s t%s %s", b, c, d, e, f);
    
    printf("iRC=%d",iRC);
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
    printf("%s\n",d);
    printf("%s\n",e);
    printf("%s\n",f);

}

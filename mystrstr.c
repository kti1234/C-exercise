#include <stdio.h>
#include <string.h>

char *mystrstr(char *str, char *in_str, int temp){
    char *ptempd = NULL;

    ptempd = in_str;

    printf("%d\n", temp);

    for(; *str != '\0' ; str++){
         in_str = ptempd;
         for(; *in_str == *str; ){
             if(*(++in_str) == '\0'){
                 printf("find\n");
                 return (str - temp + 2);
             }
             str++;
         }
    }
    printf("not find\n");
    return str;

}

int main(){
    char a[] = "abcdefg12345678912345";
    char b[] = "1234";
    char *c;
    int i = sizeof(b);

    printf("%d\n", i);
    c = mystrstr(a, b, i);

    printf("a is %s\n",a);
    printf("it is: %s\n",c);
}

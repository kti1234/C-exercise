#include <stdio.h>

int add(int a){
    static tmp;
    
    if( a == 0){
        return tmp;
    }else{
        tmp = a + add(a-1);
        return tmp;
    }

}

int main(){
    int a = 9;

    printf("%d\n",add(a));

    return 0;
}

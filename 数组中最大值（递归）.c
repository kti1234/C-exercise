#include <stdio.h>

// 递归实现查找
int findmax(int *a, int n){
    static tmp;
    
    if( n == 0){
        tmp = ( a[0] >= tmp? a[0]:tmp  );
        return tmp;
    }else{
        tmp = ( a[n] >= findmax(a, n-1)? a[n]:findmax(a, n-1));
        return tmp;
    }

}

int main(){
    int a[10] = {2,3,4,5,4,1,3,7,9,8};

    printf("%d\n",findmax(a, 10));

    return 0;
}

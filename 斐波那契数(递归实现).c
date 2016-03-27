#include <stdio.h>

//递归计算
int fib(int i){
    if(i < 2){
        return i == 0 ? 0 : 1;
    }

    return fib(i-1) + fib(i-2);
}

int main(){
    int a=0;

    printf("please input the a:");
    scanf("%d", &a);
    //输出结果
    printf("%d\n",fib(a));

}
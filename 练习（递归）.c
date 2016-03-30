#include <stdio.h>

/* 求解
n+1 m=0
ack(m,n)=ack(m-1,1) m<>0,n=0
ack(m-1,ack(m,n-1)) m<>0,n<>0
*/

// ack函数
int ackt(int m, int n){
    
    if( m == 0){
        return n + 1;
    }else if(n == 0){
        return ackt(m-1, 1);
    }else{
        return ackt( m-1, ackt( m, n-1));
    }
}

int main(){
    printf("%d\n",ackt(5, 4));

    return 0;
}

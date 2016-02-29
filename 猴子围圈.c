#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <malloc.h>


typedef struct test{
        int i;
        struct test *next;
}round;


/* 猴子围成圈，没过几只删除一只，输出最后剩下几号  */
int main(int argc, char *argv[]){

        round  *all,*nexttmp,*alltmp;
        int i,cnt,space;

        /* input the number of the round */
        printf("please import the number of the round:");
        scanf("%d",&cnt);

        if(cnt<=0){
                printf("please import the number greater than 0");
                return 0;
        }
        printf("the number is :%d\n",cnt);

        /* the number of space */
        printf("please import the number of the space:");
        scanf("%d",&space);

        if(space<=0){
                printf("please import the number greater than 0");
                return 0;
        }
        printf("the number is :%d\n",space);

        /* make the struct */
        all = (round*)malloc( sizeof(round) * cnt );
        if(all == NULL){

                printf("malloc is error.");
                return -1;
        }
        for(i=0; i<cnt; i++){
                if(i == (cnt-1)){
                        all[i].i = i+1;
                        all[cnt-1].next = &all[0];
                        continue;
                }
                all[i].i = i+1;
                all[i].next = &all[i+1];
        }

        /* find the number */
        nexttmp = all;
        i=0;
        while(1){

                for(i=0 ; i<(space-1); i++){
                        nexttmp = nexttmp->next;
                }
                        nexttmp->next = nexttmp->next->next;
                        nexttmp = nexttmp->next->next;
                if(nexttmp == nexttmp->next){
                        break;
                }

        }

        /* printf the number */
        printf(" the end number is :%d",nexttmp->i);


        /* free the memory */
        if(all != NULL)
                free(all);

        return 0;
}

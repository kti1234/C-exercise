#include <stdio.h>
#include <string.h>

#define MAX 5

int main(){

    int i = 0;
    int NumList[MAX],tmp[MAX];
    char iRc;
    int icnt = 0, icntTmp = 0, itmpchangecnt = 0;
    int iChangeTmp;

    memset(NumList, 0, sizeof(NumList));
    memset(tmp, 0, sizeof(tmp));

    /* get the number list */
    printf("please input the Number list:\n");
    for(i=0; i<MAX; i++){

        iRc = scanf("%d", &NumList[i]);
        if(0 == iRc){
            printf("get the number error.\n");
            goto Err;
        }else if(EOF == iRc){
            printf("get the number end.\n");
            break;
        }

    }
    /* print the number list */
    printf("you input %d number, they are:\n",i);
    for(icnt = 0; icnt < i ;icnt++){
        printf("%d ",NumList[icnt]);
    }
    printf("\n");
/*
    for(itmpchangecnt = i-1; itmpchangecnt > 1; itmpchangecnt-- ){
        NumList[itmpchangecnt] = NumList[itmpchangecnt-1];
    }
    for(icnt = 0; icnt < i ;icnt++){
        printf("%d ",NumList[icnt]);
    }
    printf("\n");
*/

    tmp[0] = NumList[0];

    /* paixu */
    for(icnt = 1; icnt < i; icnt++){
        for(icntTmp = 0; icntTmp < icnt; icntTmp++){
            if(tmp[icntTmp] < NumList[icnt]){
                if( icntTmp+1 == icnt){
                    tmp[icntTmp+1] = NumList[icnt];

                }
                continue;
            }else if((tmp[icntTmp] >= NumList[icnt])){

                for(itmpchangecnt = i-1; itmpchangecnt > icntTmp; itmpchangecnt-- ){

                    tmp[itmpchangecnt] = tmp[itmpchangecnt-1];
                }
                tmp[icntTmp] = NumList[icnt];
                break;
            }

        }

    }




    /* print the Number list */
    for(icnt = 0; icnt < i ;icnt++){
        printf("%d ",tmp[icnt]);
    }

    return 0;

Err:
    return -1;

}

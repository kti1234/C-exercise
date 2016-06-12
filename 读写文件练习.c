#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


struct WorkSpace{
	int inum;
	string *pcolumn1;
	string *pcolumn2;
	string *pcolumn3;
	WorkSpace *pnext;
};

int GetLineList(FILE fpIn, WorkSpace *head){
	int iCnt =0;
	int iRet = 0;
	WorkSpace sTmp;
	char *buff;
	
	if(NULL == *head){
		printf("the head is Null!\n");
		iRet = -1;
		goto End;
	}
	for(fread()){
		
	}
	


End:
	return iRet;
}

int SortList(WorkSpace **head){

}

int OutputList(WorkSpace **head){

}


void FreeTheSturct(WorkSpace **head){



}

int main(int argc, char **argv){

	int icont = 0;
	int iRC = 0;
	WorkSpace *phead = NULL;
	FILE *fpIn = NULL;
	FILE *fpOut = NULL；
	string *fPathIn = NULL;
	string *fPathOut = NULL;
	
	//option check
	if(argc < 2){
		printf("please input the file path !!\n");
		iRC = -1;
		goto Err；
	}	
	if(argc > 3){
		printf("please input the correct option!!\n ");
		iRC = -1;
		goto Err；
	}
	
	//open the file.
	fpIn = fopen(argv[1], 'r');
	if(fpIn == NULL){
		printf("open the file is error!\n");
		iRC = -1;
		goto Err；
	}
	
	if(2 == argc ){
		fpOut = fopen("./tmp_1.txt", 'wt');
		if(fpOut == NULL){
			printf("create the new file faild!!\n");
			iRC = -1;
			goto Err；
		}
	}else{
		fpOut = fopen(argv[2], 'wt');
		if(fpOut == NULL){
			printf("open the !!\n");
			iRC = -1;
			goto Err;
		}
	}
	
	//create the struct 
	head = (WorkSpace *)malloc(sizeof(WorkSpace));
	if(NULL == head){
		printf("malloc is error !\n");
		iRC = -1;
		goto Err；	
	}
	
	
	// get the line list
	iRC = GetLineList(fpIn, &phead);
	if(iRC != 0){
		printf("get the list faild!\n");
		goto Err;
	}
	
	
	// sort the list
	iRC = SortList(&phead);
	if(iRC != 0){
		printf("sort the faild!\n");
		goto Err;
	}	
	
	// output the list
	iRC = OutputList(&phead);
	if(iRC != 0){
		printf("output the faild!\n");
		goto Err;
	}	

	printf("Finish the sort and succesed!\n");


Err:
	if(fpIn != NULL;){
		fclose(fpIn);
		fpIn = NULL;
	}
	if(fpOut != NULL;){
		fclose(fpOut);
		fpOut = NULL;
	}
	FreeTheSturct(phead);
		
	return iRC;
}

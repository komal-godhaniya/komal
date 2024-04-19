#include<stdio.h>
main(){
	FILE *p;
	
	char data[100];

	p=fopen("text.txt","r");
    if(p == NULL){
        printf("can't open file");
    }
    else{
        printf("open file");

        while (fgets(data,50,p)!=NULL){
            printf("%s",data);
        } 
    }
}

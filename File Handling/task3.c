#include<stdio.h>
main(){
	FILE *p;
	
	char data[100];
	
	p=fopen("text.txt","a");
    if(p == NULL){
        printf("can't open file");
    }
    else{
        printf("open file");

    // fputs("new message");

      printf("enter data for update:");
      gets(data);
      fputs(data,p);
    }
}
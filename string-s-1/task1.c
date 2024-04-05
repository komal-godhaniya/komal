#include<stdio.h>

main(){
	
	//	task-1
	
	char k[100];
	printf("Enter Your Name:");
	gets(k);
	puts(strupr(k));

	printf("\n\n");

	//	task-2
	
	char o[100];
	printf("Enter Your Name:");
	gets(o);
	puts(strlwr(o));
	
	printf("\n\n");

	//	task-3
	
	char m[100];
	printf("Enter Your Name:");
	gets(m);
	printf("%d",strlen(m));

	printf("\n\n");


	//	task-4
	
	char a[100];
	printf("Enter Your Name:");
	gets(a);
	puts(a);

	printf("\n\n");


   	//	task-5
   	
   	char firstname[] = "Komal";
   	char lastname[] = "Godhaniya";
   	char fullname[100];
   	
   	strcpy(fullname, strcat(firstname , lastname));
   	
   	puts(fullname);

	printf("\n\n");

	//	task-6

	char g[100],n[100];
	printf("Enter value-1:");
	gets(g);
	puts(g);
	
	
	printf("Enter value-1:");
	gets(n);
	puts(n);
	


	if(strcmp(g,k) == 0){
		printf("Strings are equal");
	}
	else{
		printf("No, they are not equal");
    }
		
}

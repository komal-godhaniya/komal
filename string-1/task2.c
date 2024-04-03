
#include <stdio.h>

int main() {

  char name[]="KOMAL";
   
  for(int i=0;name[i]!= NULL; i++)
  {
      if(name[i]>='A' && name[i]<='Z'){
          name[i]+=32;
      }
      printf("%c",name[i]);
  }
   
}
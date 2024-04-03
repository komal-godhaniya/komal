
#include <stdio.h>

int main() {
  char name[]="komal";
   
  for(int i=0;name[i]!= NULL; i++)
  {
      if(name[i]>='a' && name[i]<='z'){
          name[i]-=32;
      }
      printf("%c",name[i]);
  }
   
   
}
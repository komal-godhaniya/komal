#include<stdio.h>
#include<string.h>
fuction(int k){
    if(k<=1){
        return 1;
    }
    else{
        return k*fuction(k-1);
    }
}
main(){
    int k;
    printf("enter the value=");
    scanf("%d",&k);

    printf("FACTRIAL IS....%d\n",fuction(k));
}
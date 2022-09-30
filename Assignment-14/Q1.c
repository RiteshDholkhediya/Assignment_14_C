#include<stdio.h>


int main(){ 
    int a[10],i,sum=0;
    printf("Enter 10 elements\n");
    
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered elemensts are : \n");

    for(i=0;i<10;i++){
        printf("%d ",a[i]);
        sum = sum + a[i];
    }

    printf("\nSum of 10 elements : %d",sum);
    

    return 0;
}
#include<stdio.h>


int main(){ 
    int a[10],i,sumOdd=0, sumEven=0;
    printf("Enter 10 elements\n");
    
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered elemensts are : \n");

    for(i=0;i<10;i++){
        printf("%d ",a[i]);
        if(a[i]%2)
            sumOdd = sumOdd + a[i];
        else 
            sumEven = sumEven + a[i];
    }

    printf("\nSum of even elements : %d\n",sumEven);
    printf("\nSum of odd elements : %d",sumOdd);
    

    return 0;
}
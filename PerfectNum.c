//check a number is perfect or not 

#include<stdio.h>

int main(){
    int n, rem, sum=0 ;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i = 1; i<n ; i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }

    if(sum == n){
        printf("Prefect Number..");
    }

    else{
        printf("Not Perfect");
    }
}

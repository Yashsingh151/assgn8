#include<stdio.h>

void finder(int *nums,int n){
    for(int i=0;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            if(*(nums+i) == *(nums+j)){
                printf("%d occurs twice in the array.",*(nums+i));
                return;
            }
        }
    }
}

int main(){

    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int nums[n+1];
    printf("Enter array elements: ");
    for(int i=0;i<n+1;i++){
        scanf("%d",nums+i);
    }

    int *pnums;
    pnums=nums;

    finder(pnums,n);

    return 0;
}

# include<stdio.h>

int main(){
    int arr[100] ;
    int pos ; 


    int n  ;
    printf("enter the size\n");
    scanf("%d" , &n);

    printf("enter array elements\n");
    for(int i = 0 ; i < n  ; i ++ ){
        scanf("%d",&arr[i]);
    }
    printf("enter postion \n");
    scanf("%d" , &pos);
    for(int i  = pos -1 ; i < n - 1; i ++ ){
        arr[i] = arr[i + 1 ];
    }
    printf("final array ");
    for(int i = 0 ; i < n - 1   ; i ++ ){
        printf("%d \n " , arr[i]);
    }
    return 0 ; 
    

}
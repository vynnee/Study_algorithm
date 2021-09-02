#include<stdio.h>

int main(){
    int N;
    int arr[1000];
    int temp = 0;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N ; j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
        
    for(int i = 0; i < N; i++){
        printf("%d\n", arr[i]);
    }
}
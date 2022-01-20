#include <stdio.h>
int main(){
    printf("Enter the number of elements to sort\n");
    int n; 
    scanf("%d", &n); 
    int a[n]; 
    printf("\nEnter the elements to sort\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int count = 0,c;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(a[j]>a[j+1]){
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
                count=1;
            }   
        }
        if(count == 0) break;
        count = 0;
    }
    printf("\nSorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\nSorted array with even numbers is: ");
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            printf("%d ",a[i]);
        }
    }
    printf("\nSorted array with odd numbers is: ");
    for(int i=0; i<n; i++){
        if(a[i]%2 == 1){
            printf("%d ",a[i]);
        }
    }
    printf("\nSorted array in decending order is: ");
    for(int i=n-1; i>=0; i--){
        printf("%d ",a[i]);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int i,sum=0;
    scanf("%d",&i);
    int arr[i];
    for(int j=0;j<i;j++){
      scanf("%d",&arr[j]);
    }
    for(int j=0;j<i;j++){
        sum=sum+arr[j];
    }
    printf("%d",sum); 
    return 0;
}

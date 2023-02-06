#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    int s;
    s=*a+*b;
    printf("%d",s);
    int d;
    d=abs(*a-*b);
    printf("\n%d",d);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}

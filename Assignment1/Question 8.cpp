#include <stdio.h>
#include<math.h>

void update(int *x,int *y) {
    int s;
    s=*x+*y;
    printf("%d",s);
    int c;
    c=abs(*x-*y);
    printf("\n%d",c);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}

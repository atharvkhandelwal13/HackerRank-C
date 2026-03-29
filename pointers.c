#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int c = *a;
    int d = *b;
    
    int sum = c + d;
    
    int diff;
    if (d > c){
        diff = d - c;
    }
    else{
        diff = c - d;
    }
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
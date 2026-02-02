#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a; //Assuming a is the greatest
    
    if (b > max) { //if b is bigger than a than swap b with a as the greater
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);

        int extra = y-x;

        printf("%d\n", extra);
    }

    return 0;
}
#include<stdio.h>
int main(){
    int P, Q, Y, result;
    scanf("%d %d %d", &P, &Q, &Y);
    result= ((P*52*5)+(Q*52*2))*Y;
    printf("%d\n", result);
    return 0;
}

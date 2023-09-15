#include<stdio.h>

int main() {
    int T, A, B, C, D, E, acertos = 0;
    
    scanf("%d", &T);
    
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    
    if(T == A){
        acertos += 1;
    }
    
    if(T == B){
        acertos += 1;
    }

    if(T == C){
        acertos += 1;
    }

    if(T == D){
        acertos += 1;
    }
    
    if(T == E){
        acertos += 1;
    }
    
    printf("%d\n", acertos);
    
    return 0;
}

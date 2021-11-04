#include <stdio.h>

#define N 10

int main(){
    int ia[N];
    int* p;
    printf("Enter %d numbers:" , N);
    for(p= ia; p<ia+N;++p){
        scanf("%d",p);
    }
}

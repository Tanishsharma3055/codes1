#include<stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

     if(n<0){
        n=-n;
    }

    for (  int i = n ; i > 0; i = i / 10) { //n is integer therefore decimals are not counted
        sum = sum + (i % 10); 
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

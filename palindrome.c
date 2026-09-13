#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    if(n<0){
        printf("%d is not palindrome number ",n);
        return 1;
    }
    int s=0;
    for(int i=n;i>0;i=i/10){
       s=s*10+i%10;
    }
   
    if(n==s){
        printf("%d is palindrome number ",n);
    }
    else{
        printf("%d is not palindrome number",n);
    }
    return 0;
}

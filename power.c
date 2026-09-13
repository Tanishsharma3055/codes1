#include<stdio.h>
#include<math.h>
int main (){
    float a,b;
    printf("Enter the base: ");
    scanf("%f",&a);
    printf("Enter the exponent: ");
    scanf("%f",&b);
    
    if( a==0 && b==0){
        printf("Not Defined");
        return 1;
    }

    if( a==0 ){
        printf("Answer is 0");
        return 2;
    }

    if(b==0){
        printf("Answer is 1");
        return 3;
    }
    int u=1;
    if(a<0 && b!=(int)b){
        u=-u;
        for(int i=2;i<=20 ;i+=2){
        if(b==i){
        u=-u;
        break;
      }
   }
}

        float p= pow(a,b);
    printf("Answer is %f",u*p);
    
    return 0;
}

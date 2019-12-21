#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch,n,buf[3],in=0,out=0,s;
   
    printf("enter the buf size");
    scanf("%d",&n);
    while(1){
         printf("enter your choice");
    scanf("%d",&ch);
    switch(ch){
        case 1:if((in+1)%n==out)
                {
            printf("buffer is full");
        }
        else{
            printf("enter the value\n");
            scanf("%d",&s);
        buf[in]=s;
        in=(in+1)%n;
        }
        break;
        case 2:
        if(in==out)
        printf("buffer is empty\n");
        else 
        {
            s=buf[out];
            printf("%d",s);
            out=(out+1)%n;
        }
        break;
        case 3:exit(0);
    }}
    return 0;
}
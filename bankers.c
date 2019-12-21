#include<stdio.h>
int main(){
    int i,j,r,c,mat[50][50],ava[50],need[50][50],max[50][50],finish[50],found,count=0,safe[50];
    printf("enter the no of rows\n");
    scanf("%d",&r);
    printf("enter columns\n");
    scanf("%d",&c);
    printf("enter the matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&max[i][j]);
        }
    }
    for(i=0;i<c;i++)
    scanf("%d",&ava[i]);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            need[i][j]=max[i][j]-mat[i][j];
        }
    }
    printf("need matrix is \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",need[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    finish[i]=0;
    while(count<r){
        found=0;
        for(i=0;i<r;i++)
        {
            if(finish[i]==0){
                for(j=0;j<c;j++){
                    if(need[i][j]>ava[j])
                    break;

                }
                if(j==c){
                    for(int k=0;k<c;k++){
                        ava[k]=ava[k]+mat[i][k];
                    }
                    safe[count++]=i;
                    found=1;
                    finish[i]=1;
                    
                }
                
            }
        }
        if(found==0){
            printf("system is in unsafe state");
            return 0;
        }
    }
    printf("system is in safe state\n");
    printf("safe seq is\n");
    for(int k=0;k<r;k++)
    printf("%d\t",safe[k]+1);
}
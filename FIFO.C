#include<stdio.h>
int ref[20],nf,n,fr[20],found,hit,pf=0,victim=-1;
int ishit(int i){
    hit=0;
    for(int j=0;j<nf;j++){
        if(fr[j]==ref[i]){
            hit=1;
            break;
        }
    }
    return hit;
}
int main(){

    printf("enter the no of frames\n");
    scanf("%d",&nf);
    printf("enter the reference length\n");
    scanf("%d",&n);
    printf("enter the values");
    for(int i=0;i<n;i++){
        scanf("%d",&ref[i]);
    }
    for(int j=0;j<nf;j++){
        fr[j]=-1;
    }
    for(int i=0;i<n;i++){
          found=0;
        if(ishit(i)==0){
            pf++;
            victim=(victim+1)%nf;
            fr[victim]=ref[i];
            found=1;
        }
        printf("\n%d:",ref[i]);
        if(found==1){
        for(int j=0;j<nf;j++){
            printf("%d ",fr[j]);
        }
        }
        else {
            printf("no page fault");
        }
    }
    printf("\npage fault is %d",pf);
    
}
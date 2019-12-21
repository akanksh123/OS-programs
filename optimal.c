#include<stdio.h>
int ref[20],nf,n,fr[20],found,hit,pf=0,victim=-1,near[50];
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
void disppages(){
    for(int k=0;k<nf;k++){
        if(fr[k]!=-1)
        printf("%d ",fr[k]);
    }
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
          printf("\n%d:",ref[i]);
               
        if(ishit(i)==0){
            for(int j=0;j<nf;j++){  
                int pg=fr[j];
                found=0;
                for(int k=i+1;k<n;k++){
                    if(pg==ref[k]){
                        near[j]=k;
                        found=1;
                        break;
                    }
                    else{
                        found=0;
                    }

                }
                if(!found){
                    near[j]=999;
                }}
                int max=-1;
                int rep;
                for(int j=0;j<nf;j++){
                    if(near[j]>max){
                        max=near[j];
                        rep=j;
                    }
                }
                fr[rep]=ref[i];
                pf++;
                disppages();
             }
            
            else{
                printf("no page fault\n");
            }
        }
        
        
    
    printf("\npage fault is %d",pf);
    
}

#include<stdio.h>
struct process{
    int bt,tat,wt;
};
int main(){
    int n,i,ttat,twt;
    printf("enter no of processes\n");
    scanf("%d",&n);
    struct process p[n];
    for(i=0;i<n;i++){
        printf("enter burst time of %d",i);
        scanf("%d",&p[i].bt);
        p[i].wt=p[i].tat=0;
    }
   
    int temp;
    
     p[0].tat=p[0].bt;
    for(i=1;i<n;i++){
        p[i].wt=p[i-1].wt+p[i-1].bt;
        p[i].tat=p[i].wt+p[i].bt;
    }
    ttat=twt=0;
    for(i=0;i<n;i++){
        ttat+=p[i].tat;
        twt+=p[i].wt;
    }
    printf("ttat is %d",ttat);
    printf("wt is %d",twt);
}
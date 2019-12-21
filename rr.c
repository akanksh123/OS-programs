#include<stdio.h>
struct process{
    int bt,tat,wt,rt,tt;
};
int main(){
    int n,i,ttat=0,twt=0;
    printf("enter no of processes\n");
    scanf("%d",&n);
    struct process p[n];
    for(i=0;i<n;i++){
        printf("enter burst time of %d",i);
        scanf("%d",&p[i].bt);
        p[i].wt=p[i].tat=0;
        p[i].rt=p[i].bt;
    }
    int quantum=2;
    int t=0;
    int done=0;
    while(done==0){
        done=1;
        for(i=0;i<n;i++){
            if(p[i].rt>0){
                done=0;
                if(p[i].rt>quantum){
                    t+=quantum;
                    p[i].rt-=quantum;
                }
                else{
                    t+=p[i].rt;
                    p[i].rt=0;
                    // p[i].tt=t;
                    p[i].wt=t-p[i].bt;
                }
            }
        }
        printf("hello");
      
    }
    for(i=0;i<n;i++)
    p[i].tat=p[i].bt+p[i].wt;
    for(i=0;i<n;i++){
        twt+=p[i].wt;
        ttat+=p[i].tat;
    }
     printf("ttat is %d",ttat);
    printf("wt is %d",twt);
}
#include<stdio.h>
int partion(int[],)
void Quicksort(int[],int,int);
void main(){
    int a[5];
    printf("enter the elements to be arranged\n");
    for(int i=0;i<5;i++){
        scanf("\n%d",&a[i]);
        
    }
    Quicksort(a,1,4);
    for(int i=0;i<5;i++){
        printf("\n%d",a[i]);
    }

}
int partion(int n[],int l;int u){
    int t,down,up,r;
    p=x[l];
    down=d;
    up=u;
    while(down<up){
        while (p>=x[down]&&down<up)
        {
            down++;
        }while(p<x[up]){
            up--;
        }
        if(down>up){
            t=x[down];
            x[down]=x[up];
            x[up]=t;
        }
        x[l]=x[u];
        x[u]=p;
        return u;
    }
}
void Quicksort(int a[],int l,int u){
    int j;
    if(l<u){
        j=partion(a,l,u);
        Quicksort(a,l,j-i);
        Quicksort(a,j+1,u);
    }

}

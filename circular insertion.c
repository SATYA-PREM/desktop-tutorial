#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node *start=NULL;
struct node *last=NULL;
void insert ();
void delete ();
void traverse();
int main(){
    insert();
    insert();
    insert();
    traverse();
    delete();
    traverse();
    return 0;
}
void insert(){
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&p->info);
    if(start==NULL){
        start=last=p;
        p->next=p;
    }else{
        last->next=p;
        p->next=start;
        last=p;
    }
}
void delete(){
    struct node*p,*q;
if(start==NULL){
    printf("is empty");
}else
{
    p=start;
    while(p->next!=last){
        
        p=p->next;
        q=p;
    }   p=p->next;
    q->next=start;
    last=q;
    free(p);
}
}
void traverse(){
        struct node*p;
if(start==NULL){
    printf("is empty");
    }else{
        p=start;
        while(p!=last){
            printf("\n%d",p->info);
            p=p->next;
        }   
        printf("\n%d",p->info);
    }
}
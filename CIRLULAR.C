#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node *start=NULL;
struct node *last=NULL;
void insert();
void delete1();
void traverse();
int main(){
    insert();
    insert();
    insert();
    delete1();
    traverse();
}
void insert(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&p->info);
    if(start==NULL){
        start=last=p;
        start->next=p;
    }else{
        last->next=p;
        p->next=start;
        last=p;
    }
}
void delete1(){
    struct node *p,*q;
    if(start==NULL){
        printf("list is empty");
    }else{
        p=last;
        printf("%d is deleted",p->info);
        if(start==last){
            start=last=NULL;
            free(p);
        }else{
            q=start;
            while (q->next!=last)
            {
                q=q->next;
            }
            q->next=start;
            last=q;
            free(p);
            }
    }
}
void traverse(){
    struct node *p;
    p=start;
    while(p!=last){
        printf("\n%d",p->info);
        p=p->next;
    }
    printf("\n%d",p->info);
}
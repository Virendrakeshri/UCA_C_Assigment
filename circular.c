#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 typedef struct queue{
    int front;
     int rear;
    int *arr;
    int size;
     int count;
}que;
void insert(que *q1,int data){
    if(q1->count==5){
        printf("Queue Overflow");
        printf("\n");
    }
    else{
        q1->arr[q1->rear]=data;
         if(q1->front==-1){
            q1->front=0;
        }
        q1->rear++;
        q1->count++;
        if(q1->rear==5){
            q1->rear=0;
        }
       
    }
}
void dele(que* q1){
    if(q1->count==0){
        printf("Queue Underflow" );
        printf("\n");
    }
    else{
         q1->count--;
        if(q1->count==0){
            q1->front=-1;
            q1->rear=0;
            
        }
        else{
            if(q1->front==4){
                q1->front=0;
            }
            else{
                q1->front++;
            }
        }
        
    }
   
    
}
void dis(que* q1){
    if(q1->count==0){
        printf("NULL");
        printf("\n");
        return ;
    }
    int x=q1->front;
    for(int i=1;i<=q1->count;i++){
        if(x==5){
            x=0;
            printf("%d ",q1->arr[x]);
        }
        else{
            printf("%d ",q1->arr[x]);
            x++;
        }
    }
    if(q1->count>0)
    printf("\n");
    
}

int main() {
    que *q1=(que*) malloc(sizeof(que));
   q1->arr=malloc(5*(sizeof(int)));
    q1->size=5;
    q1->rear=0;
    q1->front=-1;
    q1->count=0;
     int  n;
    scanf("%d",&n);
    while(n!=4){
        if(n==1){
            int data;
            scanf("%d",&data);
            insert(q1,data);
        }
        else if(n==2){
            dele(q1);
        }
        else if(n==3){
            dis(q1);
        }
        scanf("%d",&n);
    }
    
    
 
  
}

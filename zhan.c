#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define INIT_SIZE 100
#define INCREMENT 10
#define nullptr NULL
typedef int Elem;
typedef enum{ERROR=0,OK=1}Status;
typedef struct{
    Elem* pBase;
    Elem* pTop;
    unsigned int stackSize;
}Stack;//定义了一个对象，有三个属性//

//这些函数叫操作对象的方法//
Status Init(Stack* pStack);//给对象赋初值//
void Free(Stack* pStack);
int Length(Stack* pStack);
void Clear(Stack* pStack);
bool Isempty(Stack* pStack);
Status Push(Stack* pStack,Elem elem);
Status Pop(Stack* pStack,Elem* pElem);
Status Peek(Stack* pStack,Elem* pElem);
Status Traverse(Stack* pStack,Status(*visit)(Elem*));

Status Init(Stack* pStack){
    pStack->pBase=(Elem*)malloc(INIT_SIZE*sizeof(Elem));
    if(pStack->pBase==nullptr){
        return ERROR;
    }
    pStack->pTop=pStack->pBase;
    pStack->stackSize=INIT_SIZE;
    return OK;
}

void Free(Stack* pStack){
    free(pStack->pBase);
    return;
}

int Length(Stack* pStack){
    return pStack->pTop-pStack->pBase;
}

void Clear(Stack* pStack){
    pStack->pTop=pStack->pBase;
}

bool Isempty(Stack* pStack){
    return pStack->pTop==pStack->pBase?true:false;
}

Status Push(Stack* pStack,Elem elem){
    int newSize;
    Elem* pTemp;
    if(Length(pStack)>=pStack->stackSize){
        newSize=pStack->stackSize+INCREMENT;
        pTemp=(Elem*)realloc(pStack->pBase,newSize*sizeof(Elem));
        if(pTemp==nullptr){
            return ERROR;
        }
        pStack->pBase=pTemp;
        pStack->pTop=pStack->pBase+pStack->stackSize;
        pStack->stackSize=newSize;
    }
    *(pStack->pTop)=elem;
    pStack->pTop++;
    return OK;
}

Status Pop(Stack* pStack,Elem* pElem){
    if(Isempty(pStack)){
        return ERROR;
    }
    pStack->pTop--;
    *pElem=*(pStack->pTop);
    return OK;
}

Status Peek(Stack* pStack,Elem* pElem){
    if(Isempty(pStack)){
        return ERROR;
    }
    *pElem=*(pStack->pTop-1);
    return OK;
}

Status Traverse(Stack* pStack,Status(*visit)(Elem*)){
    int i,n;
    n=Length(pStack);
    for(i=0;i<n;i++){
        visit(pStack->pBase+i);
    }
    return OK;
}

Status Print(int* px){
    printf("%d\t",*px);
    return OK;
}

int main(){
    int i,n;
    n=7;
    Stack stack;//创建一个对象,静态对象//
    Init(&stack);
    for(i=0;i<n;i++){
        Push(&stack,i);
    }
    Traverse(&stack,Print);
    printf("\n");
    while (!Isempty(&stack))
    {
        Pop(&stack,&i);
        printf("Pop %d\n");
    }
    Free(&stack);
    return 0;
}
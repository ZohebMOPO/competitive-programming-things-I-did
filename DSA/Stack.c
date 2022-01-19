#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

struct Stack
{
    int items[MAX];
    int top;
};

typedef struct Stack st;

void createEmptyStack(st *s){
    s -> top = -1;
}

int isFull(st *s){
    if(s -> top == MAX - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(st *s){
    if (s -> top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }   
}

void addElement(st *s, int newItem){
    if(isFull(s)){
        printf("\n STACK IS FULLLLLL \n");
    }else {
        s -> top++;
        s -> items[s -> top] = newItem;
        count++;
    }
}

void removeElement(st *s){
    if(isEmpty(s)){
        printf("\n IS EMPTY \n");
    } else{
        printf("Item popped = %d", s -> items[s -> top]);
        s -> top--;
        count--;
    }
}

void showStack(st *s){
    printf("Stack: ");
    for(int i = 0; i < count; i++){
        printf("%d ", s -> items[i]);
    }
    printf("\n");
}

int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  addElement(s, 1);
  addElement(s, 2);
  addElement(s, 3);
  addElement(s, 4);

  showStack(s);

  removeElement(s);

  printf("\nAfter popping out\n");
  showStack(s);
}

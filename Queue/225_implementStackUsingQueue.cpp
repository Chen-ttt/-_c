typedef struct QNode{
    int data;
    struct QNode *next;
} QNode, *QueuePtr;


typedef struct {
    QueuePtr front[2], rear[2];
    int flag;
} MyStack;


MyStack* myStackCreate() {
    MyStack *S = (MyStack*)malloc(sizeof(MyStack));

    S->front[0] = S->rear[0] = NULL;
    S->front[1] = S->rear[1] = NULL;
    S->flag = 0;
    return S;
}

void myStackPush(MyStack* obj, int x) {
    int position = obj->flag;
    QueuePtr newNode = (QueuePtr)malloc(sizeof(struct QNode));
    newNode->data = x;
    newNode->next = NULL;

    if(obj->front[position]==NULL){ // it's the first time for pushing
        obj->front[position] = obj->rear[position] = newNode;
    } else { // push in the end
        obj->rear[position]->next = newNode;
        obj->rear[position] = newNode;
    }
}

int myStackPop(MyStack* obj) {
    int position = obj->flag;
    int dest;
    if(position==0) dest = 1;
    else if(position==1) dest = 0;

    if(obj->front[position]==obj->rear[position]){ // just pop the only element, empty dest first
        obj->front[dest] = obj->rear[dest] = NULL;
    } else {
        obj->front[dest] = obj->front[position];
        while(obj->front[position]!=obj->rear[position]){ // remain 1 element, end loop
            obj->rear[dest] = obj->front[position];
            obj->front[position] = obj->front[position]->next;
        }
        obj->flag = dest; // status is changed to 'dest'
    }

    // pop the last element
    int pop = obj->rear[position]->data;
    obj->front[position] = obj->rear[position] = NULL;
    return pop;
}

int myStackTop(MyStack* obj) {
    int position = obj->flag;
    return obj->rear[position]->data;
}

bool myStackEmpty(MyStack* obj) {
    if(obj->front[0]==NULL && obj->front[1]==NULL
       && obj->rear[0]==NULL && obj->rear[1]==NULL) return true;
    else return false;
}

//void myStackFree(MyStack* obj) {
//
//}


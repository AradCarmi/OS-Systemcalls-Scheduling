
typedef struct queue{
    int size;
    int cap;
    int forward;
    int backward;
    struct proc **elements;
}queue;


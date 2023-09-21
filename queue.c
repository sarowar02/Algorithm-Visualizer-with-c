

#ifndef QUEUE_C
#define QUEUE_C

#include "algo_visualizer.h"
struct Node
    {
        char data;
        struct Node *next;
        struct Node *prev;
    };
    struct queue
    {
        struct Node *front;
        struct Node *rear;
    };

#endif // QUEUE_C










#include "algo_visualizer.h"
struct stack
{

    int stack[MAX_STACK_SIZE ];
    int top;
    int x,y;
    char str[10];
    void push(int item)
    {
        if (top >= MAX_STACK_SIZE  - 1)
        {
            printf("Stack Overflow\n");
            return;
        }
        stack[++top] = item;
    }
    int pop()
    {
        if (top < 0)
        {
            printf("Stack Underflow\n");
            return -1;
        }
        return stack[top--];
    }
    void display()
    {
        int i;
        for (i=0; i<=top; i++)
        {
            int bottom=200+ MAX_STACK_SIZE*box_height;

            sprintf(str, "%d", stack[i]);
            outtextxy(590, bottom +5- (i+1) * 40, str);
            line(500,bottom - (i+1) * box_height,700,bottom - (i+1) * box_height);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(502,bottom - (i+1) * 40+2,WHITE);
        }
    }

};



#include "algo_visualizer.h"
#include "stack.c"
#include "queue.c"


int main()
{
    //initgraph(&gd,&gm,"");
    initwindow(1000,750,"Algorithtm Visualizer");



    while(1)
    {
        //MAIN MENU
        settextstyle(SMALL_FONT,HORIZ_DIR,8);
        outtextxy(350,100,"ALGORITHM VISUALIZER");


        settextstyle(SMALL_FONT,HORIZ_DIR,10);

        int y_margin=150;
        rectangle(150,10+y_margin,500,160+y_margin);
        outtextxy(240,65+y_margin,"Sorting");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(202,14+y_margin,WHITE);

        rectangle(150,180+y_margin,500,330+y_margin);
        outtextxy(207,235+y_margin,"Linked List");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(202,185+y_margin,WHITE);

        rectangle(520,10+y_margin,870,160+y_margin);
        outtextxy(575,65+y_margin,"Searching");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(525,14+y_margin,WHITE);

        rectangle(520,180+y_margin,870,330+y_margin);
        outtextxy(615,235+y_margin,"Graph");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(525,185+y_margin,WHITE);

        rectangle(435,390+y_margin,585,440+y_margin);
        outtextxy(465,395+y_margin,"Exit");
        setfillstyle(SOLID_FILL,RED);
        floodfill(445,400+y_margin,WHITE);





        int x,y;
        // getmouseclick(WM_LBUTTONDBLCLK,x,y);
        //clearmouseclick(WM_LBUTTONDBLCLK);
        while(!ismouseclick(WM_LBUTTONDOWN));
        getmouseclick(WM_LBUTTONDOWN,x,y);


        if((x>=150 && x<=500) && (y>=160 && y<=310))// SORTING ALGORITHMS
        {
            while(1)
            {

                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(350,110,"Sorting algorithms");
                y_margin=50;


                settextstyle(SMALL_FONT,HORIZ_DIR,8);
                rectangle(50,y_margin,170,2*y_margin);
                outtextxy(55,y_margin+12,"< Back <");
                setfillstyle(SOLID_FILL,CYAN);
                floodfill(55,5+y_margin,WHITE);

                settextstyle(SMALL_FONT,HORIZ_DIR,9);
                rectangle(320,130+y_margin,670,230+y_margin);
                outtextxy(350,165+y_margin,"Bubble sort");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,135+y_margin,WHITE);

                rectangle(320,250+y_margin,670,350+y_margin);
                outtextxy(350,285+y_margin,"Selection sort");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,335+y_margin,WHITE);

                rectangle(320,370+y_margin,670,470+y_margin);
                outtextxy(350,405+y_margin,"Insertion sort");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,375+y_margin,WHITE);

                while(!ismouseclick(WM_LBUTTONDOWN));
                getmouseclick(WM_LBUTTONDOWN,x,y);


                if((x>=320 && x<=670) && (y>=180 && y<=280))// BUBBLE SORT
                {

                    cleardevice();
                    int arr[N];
                    srand(time(NULL));
                    for(int i=0; i<N; i++)
                    {

                        arr[i]=random_int(MIN,MAX);
                    }
                    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                    drawArray(arr,sizeof(arr)/sizeof(arr[0]),-1,RED);
                    bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
                    //cleardevice();
                    drawArray(arr,sizeof(arr)/sizeof(arr[0]),-1,GREEN);
                    outtextxy(200,200,"ARRAY IS SORTED!");
                    delay(2000);
                    cleardevice();
                }
                else if((x>=50 && x<=170) && (y>=50 && y<=100)) //BACK BUTTON
                {
                    cleardevice();
                    break;
                }

                getch();


            }

        }

        if((x>=520 && x<=870) && (y>=160 && y<=310)) //SEARCHING ALGORITHMS
        {
            while(1)
            {

                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(350,110,"Searching algorithms");
                y_margin=50;


                settextstyle(SMALL_FONT,HORIZ_DIR,8);
                rectangle(50,y_margin,170,2*y_margin);
                outtextxy(55,y_margin+12,"< Back <");
                setfillstyle(SOLID_FILL,CYAN);
                floodfill(55,5+y_margin,WHITE);

                settextstyle(SMALL_FONT,HORIZ_DIR,9);
                rectangle(320,130+y_margin,670,230+y_margin);
                outtextxy(350,165+y_margin,"Linear Search");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,135+y_margin,WHITE);

                rectangle(320,250+y_margin,670,350+y_margin);
                outtextxy(350,285+y_margin,"Binary Search");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,335+y_margin,WHITE);

                while(!ismouseclick(WM_LBUTTONDOWN));
                getmouseclick(WM_LBUTTONDOWN,x,y);


                if((x>=320 && x<=670) && (y>=180 && y<=280))//LINEAR SEARCH
                {

                    int arr[N];
                    srand(time(NULL));
                    for(int i=0; i<N; i++)
                    {

                        arr[i]=random_int(40,50);
                    }
                    cleardevice();

                    outtextxy(300,200,"Linear Search Visualization");
                    linear_search(arr,sizeof(arr)/sizeof(arr[0]),-1);

                    cleardevice();
                }
                else if((x>=320 && x<=670) && (y>=300 && y<=400))//BINARY SEARCH
                {

                    cleardevice();


                    int arr[N]= {40,41,42,43,44,45,46,47,48,49};
                    srand(time(NULL));
                    int sr=random_int(40,50);

                    binary_search(arr,10,sr);
                    getch();
                }
                else if((x>=50 && x<=170) && (y>=50 && y<=100))//BACK BUTTON
                {
                    cleardevice();
                    break;
                }

                getch();


            }

        }

        if((x>=150 && x<=500) && (y>=330 && y<=480))// LINKED LIST-- STACK AND QUEUE
        {
            while(1)
            {

                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(350,110,"Linked list");
                y_margin=50;


                settextstyle(SMALL_FONT,HORIZ_DIR,8);
                rectangle(50,y_margin,170,2*y_margin);
                outtextxy(55,y_margin+12,"< Back <");
                setfillstyle(SOLID_FILL,CYAN);
                floodfill(55,5+y_margin,WHITE);

                settextstyle(SMALL_FONT,HORIZ_DIR,9);
                rectangle(320,130+y_margin,670,230+y_margin);
                outtextxy(350,165+y_margin,"Stack");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,135+y_margin,WHITE);

                rectangle(320,250+y_margin,670,350+y_margin);
                outtextxy(350,285+y_margin,"Queue");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,335+y_margin,WHITE);


                while(!ismouseclick(WM_LBUTTONDOWN));
                getmouseclick(WM_LBUTTONDOWN,x,y);

                if((x>=150 && x<=500) && (y>=180 && y<=280))//STACK DATA STRUCTURE
                {

                    stack st;
                    st.top = -1;
                    st.x = 200, st.y = 100;

                    int item, ch,flag=0;
                    while (1)
                    {
                        cleardevice(); // clear the screen
                        outtextxy(100, 50, "STACK VISUALIZATION");
                        //rectangle(500, 80, 600, 100+MAX_SIZE*30);
                        // draw the stack rectangle
                        int top_margin=200;
                        line(500,top_margin,500,top_margin+MAX_STACK_SIZE*box_height);
                        line(700,top_margin,700,top_margin+MAX_STACK_SIZE*box_height);
                        line(500,top_margin+MAX_STACK_SIZE *box_height,700,top_margin+MAX_STACK_SIZE *box_height);

                        st.display();
                        outtextxy(110, 100+ 50, "1. Push");
                        outtextxy(110, 100+ 80, "2. Pop");
                        outtextxy(110, 100+  110, "3. Exit");
                        outtextxy(110, 250, "Enter your choice: ");
                        if(flag) break;
                        ch = getch() - '0';
                        switch (ch)
                        {
                        case 1:
                            printf("Enter the element to be pushed: ");
                            scanf("%d", &item);
                            st.push(item);
                            break;
                        case 2:
                            item = st.pop();
                            if (item != -1)
                                printf("Popped item: %d\n", item);
                            break;
                        case 3:
                            flag=1;
                            break;
                        default:
                            printf("Invalid choice\n");
                        }
                        if(flag) break;

                    }

                }

                else if((x>=320 && x<=670) && (y>=300 && y<=400))//QUEUE DATA STRUCTURE
                {

                    int item,ch,flag=0;
                    struct queue q;
                    initQ(&q);
                    showq(q);
                    while(1)
                    {
                        cleardevice();


                        outtextxy(200,100,"Queue visualization");
                        outtextxy(200,200,"Enter your choice");
                        outtextxy(200,250,"1.Enqueue");
                        outtextxy(200,300,"2.Dequeue");
                        outtextxy(200,350,"3.Exit");
                        showq(q);
                        ch=getch()-'0';
                        switch(ch)

                        {
                        case 1:
                            printf("Enter element to enqueue:");
                            scanf("%d",&item);
                            enq(&q,item);
                            break;
                        case 2:
                            item=deq(&q);
                            printf("%d is dequeued\n",item);
                            break;
                        case 3:
                            flag=1;
                            clearmouseclick(WM_LBUTTONDOWN);
                            break;
                        default:
                            printf("wrong choice\n");


                        }

                        if(flag) break;

                    }
                }

                else if((x>=50 && x<=170) && (y>=50 && y<=100)) //BACK BUTTON
                {
                    cleardevice();
                    break;
                }


            }

        }//LINKED LIST END


        if((x>=520 && x<=870) && (y>=330 && y<=480))// GRAPH DATA STRUCTURE-- BFS AND DFS
        {
            while(1)
            {

                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(350,110,"Linked list");
                y_margin=50;


                settextstyle(SMALL_FONT,HORIZ_DIR,8);
                rectangle(50,y_margin,170,2*y_margin);
                outtextxy(55,y_margin+12,"< Back <");
                setfillstyle(SOLID_FILL,CYAN);
                floodfill(55,5+y_margin,WHITE);

                settextstyle(SMALL_FONT,HORIZ_DIR,9);
                rectangle(320,130+y_margin,670,230+y_margin);
                outtextxy(350,165+y_margin,"DFS");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,135+y_margin,WHITE);

                rectangle(320,250+y_margin,670,350+y_margin);
                outtextxy(350,285+y_margin,"BFS");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,335+y_margin,WHITE);


                while(!ismouseclick(WM_LBUTTONDOWN));
                getmouseclick(WM_LBUTTONDOWN,x,y);

                printf("%d %d",x,y);

                if((x>=150 && x<=500) && (y>=180 && y<=280))//DFS
                {
                    cleardevice();

                    dfsvis();

                    getch();




                }

                else if((x>=320 && x<=670) && (y>=300 && y<=400))//BFS
                {
                    cleardevice();

                    bfsvis();
                    getch();


                }//

                else if((x>=50 && x<=170) && (y>=50 && y<=100)) //BACK BUTTON
                {
                    cleardevice();
                    break;
                }



            }

        }//GRAPH DATA STRUCTURE END




        else if((x>=400 && x<=600) && (y>=540 && y<=590))
        {

            return 0;
        }
        cleardevice();
    }

}

//QUEUE FUNCTIONS HERE
void initQ(struct queue *q)
{
    q->front=NULL;
    q->rear=NULL;
}
void enq(struct queue *q,int val)
{
    struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
    new_node->data=val;
    new_node->next=NULL;
    if(q->rear==NULL)
    {
        q->front=q->rear=new_node;
    }
    else
    {
        q->rear->next=new_node;
        q->rear=new_node;
    }
}
int deq(struct queue *q)
{
    if(q->front==NULL)
    {
        printf("queue is underflow!");
        q->rear=NULL;
        return -1;
    }
    else
    {
        struct Node *n=q->front;
        int data=q->front->data;
        q->front=q->front->next;
        free(n);
        return data;
    }

}
void showq(struct queue q)
{
    int j=0;
    char str[10];
    rectangle(550,200,900,250);
    int arr[10];
    for(struct Node *i=q.front; i!=NULL;)
    {
        arr[j]=i->data;
        i=i->next;
        j++;
    }
    int k=0;
    for(int i=j-1; i>=0; i--)
    {

        sprintf(str,"%d",arr[i]);

        outtextxy(555+k*40,210,str);
        k++;
        //printf("%d ",arr[i]);
    }
}

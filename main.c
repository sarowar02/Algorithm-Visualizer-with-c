#include "algo_visualizer.h"
#include "stack.c"
#include "queue.c"


int main()
{
    //initgraph(&gd,&gm,"");
    initwindow(1000,750,"Algorithtm Visualizer");

     readimagefile("C:/Users/User/Desktop/images/algo_banner.jpeg",0,0,1080,720);
      //Sleep(2000);
      cleardevice();
    while(1)
    {
        setbkcolor(BLACK);
        cleardevice();
        //MAIN MENU
        settextstyle(SMALL_FONT,HORIZ_DIR,8);
        outtextxy(350,100,"ALGORITHM VISUALIZER");


        settextstyle(SMALL_FONT,HORIZ_DIR,10);

        int y_margin=150;

        rectangle(150,10+y_margin,500,160+y_margin);
        setbkcolor(GREEN);
        outtextxy(240,65+y_margin,"Sorting");

        setfillstyle(SOLID_FILL,GREEN);
        floodfill(202,14+y_margin,WHITE);
        //floodfill(291,235,WHITE);
         floodfill(391,234,WHITE);



        rectangle(150,180+y_margin,500,330+y_margin);
        outtextxy(207,235+y_margin,"Linked List");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(202,185+y_margin,WHITE);
         floodfill(349,407,WHITE);

        rectangle(520,10+y_margin,870,160+y_margin);
        outtextxy(575,65+y_margin,"Searching");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(525,14+y_margin,WHITE);
         floodfill(801,237,WHITE);

        rectangle(520,180+y_margin,870,330+y_margin);
        outtextxy(615,235+y_margin,"Graph");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(525,185+y_margin,WHITE);
         floodfill(716,405,WHITE);

        rectangle(330,350+y_margin,680,480+y_margin);
        outtextxy(425,400+y_margin,"String");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(340,360+y_margin,WHITE);
         floodfill(547,570,WHITE);

        rectangle(700,390+y_margin,850,440+y_margin);
        outtextxy(730,395+y_margin,"Exit");
        setfillstyle(SOLID_FILL,RED);
        floodfill(745,400+y_margin,WHITE);





        int x,y;
        // getmouseclick(WM_LBUTTONDBLCLK,x,y);
        //clearmouseclick(WM_LBUTTONDBLCLK);
        while(!ismouseclick(WM_LBUTTONDOWN));
        getmouseclick(WM_LBUTTONDOWN,x,y);

        if((x>=150 && x<=500) && (y>=160 && y<=310))// SORTING ALGORITHMS
        {
            while(1)
            {
                setbkcolor(BLACK);
                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(350,110,"Sorting algorithms");
                y_margin=50;

                setbkcolor(GREEN);
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
                    setbkcolor(BLACK);
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
                else if((x>=320 && x<=670) && (y>=300 && y<=400))// SELECTION SORT
                        {
                            setbkcolor(BLACK);
                          cleardevice();
                         selection_sort();

                        }
                else if((x>=320 && x<=670) && (y>=420 && y<=520))// INSERTION SORT
                        {
                          cleardevice();
                          outtextxy(200,300,"Insertion sort will be available soon..");
                          outtextxy(200,350,"press any key to halt!");

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
                setbkcolor(BLACK);
                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(350,110,"Searching algorithms");
                y_margin=50;

                setbkcolor(GREEN);
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
                    setbkcolor(BLACK);
                    cleardevice();

                    outtextxy(300,200,"Linear Search Visualization");
                    linear_search(arr,sizeof(arr)/sizeof(arr[0]),-1);

                }
                else if((x>=320 && x<=670) && (y>=300 && y<=400))//BINARY SEARCH
                {
                    setbkcolor(BLACK);
                    cleardevice();


                    int arr[N]= {40,41,42,43,44,45,46,47,48,49};
                    srand(time(NULL));
                    int sr=random_int(40,50);
                    binary_search(arr,10,sr);
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
            setbkcolor(BLACK);
            cleardevice();
            while(1)
            {
                setbkcolor(BLACK);
                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(400,110,"Linked list");
                y_margin=50;

                setbkcolor(GREEN);
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
                        setbkcolor(BLACK);
                        cleardevice(); // clear the screen
                        outtextxy(100, 50, "STACK VISUALIZATION");
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
                        char value;
                        switch (ch)
                        {
                        case 1:
                            outtextxy(100,300,"press key to push value");
                            value=getch();
                            st.push(value);
                            break;
                        case 2:
                            item = st.pop();
                            if (item != -1)
                            break;
                        case 3:
                            flag=1;
                            break;
                        default:
                            outtextxy(100,400,"Invalid choice");
                        }
                        if(flag) break;

                    }
                    cleardevice();

                }

                else if((x>=320 && x<=670) && (y>=300 && y<=400))//QUEUE DATA STRUCTURE
                {

                    int item,ch,flag=0;
                    struct queue q;
                    initQ(&q);
                    showq(q);
                    while(1)
                    {
                        setbkcolor(BLACK);
                        cleardevice();


                        outtextxy(200,100,"Queue visualization");
                        outtextxy(200,200,"Enter your choice");
                        outtextxy(200,250,"1.Enqueue");
                        outtextxy(200,300,"2.Dequeue");
                        outtextxy(200,350,"3.Exit");
                        showq(q);
                        ch=getch()-'0';
                        char value;
                        switch(ch)

                        {
                        case 1:

                            outtextxy(500,300,"press key to push value");
                            value=getch();
                            enq(&q,value);
                            break;

                        case 2:
                            item=deq(&q);
                            outtextxy(500,350,"first item dequeued");
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
                setbkcolor(BLACK);
                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);



                outtextxy(400,110,"Graph");
                y_margin=50;

                setbkcolor(GREEN);
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
                floodfill(361,227,WHITE);

                rectangle(320,250+y_margin,670,350+y_margin);
                outtextxy(350,285+y_margin,"BFS");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,335+y_margin,WHITE);


                while(!ismouseclick(WM_LBUTTONDOWN));
                getmouseclick(WM_LBUTTONDOWN,x,y);



                if((x>=150 && x<=500) && (y>=180 && y<=280))//DFS
                {
                    setbkcolor(BLACK);
                    cleardevice();

                    dfsvis(0);
                    getch();
                    cleardevice();




                }

                else if((x>=320 && x<=670) && (y>=300 && y<=400))//BFS
                {
                    setbkcolor(BLACK);
                    cleardevice();

                   bfsvis(0);
                    getch();
                    cleardevice();


                }//

                else if((x>=50 && x<=170) && (y>=50 && y<=100)) //BACK BUTTON
                {
                    cleardevice();
                    break;
                }



            }

        }//GRAPH DATA STRUCTURE END



if((x>=330 && x<=680) && (y>=500 && y<=630))//STRING OPERATION
        {
            while(1)
            {
                setbkcolor(BLACK);
                cleardevice();
                settextstyle(SMALL_FONT,HORIZ_DIR,9);


                outtextxy(400,110,"String");
                y_margin=50;

                setbkcolor(GREEN);
                settextstyle(SMALL_FONT,HORIZ_DIR,8);
                rectangle(50,y_margin,170,2*y_margin);
                outtextxy(55,y_margin+12,"< Back <");
                setfillstyle(SOLID_FILL,CYAN);
                floodfill(55,5+y_margin,WHITE);


                settextstyle(SMALL_FONT,HORIZ_DIR,9);
                rectangle(320,130+y_margin,670,230+y_margin);
                outtextxy(350,165+y_margin,"Substring Checking");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,135+y_margin,WHITE);

                rectangle(320,250+y_margin,670,350+y_margin);
                outtextxy(350,285+y_margin,"String Hashing");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,335+y_margin,WHITE);

                rectangle(320,370+y_margin,670,470+y_margin);
                outtextxy(350,405+y_margin,"Palindrome");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,375+y_margin,WHITE);

                rectangle(320,490+y_margin,670,590+y_margin);
                outtextxy(350,505+y_margin,"Concatenation");
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(325,495+y_margin,WHITE);


                while(!ismouseclick(WM_LBUTTONDOWN));
                getmouseclick(WM_LBUTTONDOWN,x,y);

                if((x>=150 && x<=500) && (y>=180 && y<=280))//Concatenation
                {
                    setbkcolor(BLACK);
                    cleardevice();
                    substrVis();

                    getch();


                }

                else if((x>=320 && x<=670) && (y>=300 && y<=400))//
                {
                    setbkcolor(BLACK);
                    cleardevice();

                    stringHashing();
                    getch();


                }//STRING HASHING

                else if((x>=320 && x<=670) && (y>=420 && y<=520))//PALINDROME CHECKING
                        {
                            setbkcolor(BLACK);
                          cleardevice();
                          palindrome();
                          getch();


                        }
                else if((x>=320 && x<=670) && (y>=540 && y<=640))//STRING CONCATENATION
                        {


                            setbkcolor(BLACK);
                          cleardevice();
                          visu_string_concat();
                          getch();


                        }

                else if((x>=50 && x<=170) && (y>=50 && y<=100)) //BACK BUTTON
                {
                    cleardevice();
                    break;
                }



            }

        }//STRING OPERATION


        else if((x>=700 && x<=850) && (y>=540 && y<=590))
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
void enq(struct queue *q, char val)
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
       outtextxy(500,400,"queue is underflow!");
        q->rear=NULL;
        return -1;
    }
    else
    {
        struct Node *n=q->front;
        char data=q->front->data;
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
    char arr[10];
    for(struct Node *i=q.front; i!=NULL;)
    {
        arr[j]=i->data;
        i=i->next;
        j++;
    }
    int k=0;
    for(int i=j-1; i>=0; i--)
    {

        sprintf(str,"%c",arr[i]);

        outtextxy(555+k*40,210,str);
        k++;

    }
}
int random_int(int min,int max)
{
    return (rand()%(max-min+1))+min;

}

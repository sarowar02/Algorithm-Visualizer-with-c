#include "algo_visualizer.h"
int visit[20];
void draw_ln_Array(int *arr,int n,int high_ind,int sr)
{



    for(int i=0;i<n;i++)
    {
       int x=x_margin+i*(x_margin+box_width);
       rectangle(x,400,x+box_width,400+box_height);

        if(visit[i])
        {

            setfillstyle(SOLID_FILL,GREEN);
            floodfill(x+2,402,WHITE);
        }
        else if(i==high_ind)
        {

            setfillstyle(SOLID_FILL,RED);
            floodfill(x+2,402,WHITE);
        }

       char str[10];

       sprintf(str,"%d",arr[i]);
       outtextxy(x+10,380,str);
       outtextxy(250,250,"searching for ");
       sprintf(str,"%d",sr);
       outtextxy(450,250,str);

    }

}
void linear_search(int *arr,int n,int high_ind)
{
    int sr;
    sr=random_int(40,50);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   draw_ln_Array(arr,n,-1,sr);
   //printf("%d",sr);
   memset(visit,0,sizeof(visit));
    for(int i=0;i<n;i++)
    {
            delay(500);
            if(arr[i]==sr)
            {
             visit[i]=1;
             draw_ln_Array(arr,n,i,sr);
             char ind[10];
             sprintf(ind,"%d",i);

             outtextxy(250,280,"Value found at index ");
             outtextxy(550,280,ind);
             getch();
             return;

            }
            else draw_ln_Array(arr,n,i,sr);


    }
    outtextxy(250,280,"Value  not found ");
    getch();

}

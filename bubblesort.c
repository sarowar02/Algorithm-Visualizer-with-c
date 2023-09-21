#include "algo_visualizer.h"

int visited[20];
void drawArray(int *arr,int n,int highlight_ind,int color)
{

    int bar_width=30;
    int margin=20;
    int y_margin=getmaxy()-20;

    for(int i=0;i<n;i++)
    {
        int x=100+i*(margin+bar_width)+margin;
        int bar_height=arr[i]*10;
        int y=y_margin-bar_height;
        rectangle(x,y,x+bar_width,y_margin);
        if(visited[i])
        {
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(x+2,y+2,WHITE);
        }
        else if(i==highlight_ind)
        {

            setfillstyle(SOLID_FILL,color);
            floodfill(x+2,y+2,WHITE);
        }
        else if(i==highlight_ind+1)
        {

            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(x+2,y+2,WHITE);
        }
        char str[10];
        sprintf(str,"%d",arr[i]);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(x+4,y-20,str);
    }

}
void bubble_sort(int *arr,int n)
{
    int done=n,swaped=0;
    char str[10];

    for(int i=0;i<n-1;i++)
    {
        int flag=0,eflag=0;

        for(int j=0;j<n-i-1;j++)
        {
            cleardevice();
            settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
            //setcolor(BLACK);
            outtextxy(100,100,"Bubble Sort Visulization");
            outtextxy(300,200,"Swaped: ");
            sprintf(str,"%d",swaped);
            outtextxy(500,200,str);
            if(kbhit())
            {
                eflag=1;
                break;
            }
            drawArray(arr,n,j,RED);
            if(arr[j]>arr[j+1])
            {
                outtextxy(100,150,"arr[j]>arr[j+1]");
                swaped++;
                flag=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else outtextxy(100,150,"arr[j]<arr[j+1]");
            delay(500);
        }
        if(eflag) break;
        visited[--done]=1;
        //if(!flag) break;
    }
    visited[0]=1;
}

#include "algo_visualizer.h"
void draw_selection_array(int *arr,int *visited,int n,int highlight_ind,int color)
{

    int bar_width=30;
    int margin=20;
    int y_margin=getmaxy()-20;
    int arrow=highlight_ind+1;

    for(int i=0; i<n; i++)
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
        if(visited[i-1] and i>=0)
        {

            readimagefile("arrow.jpeg",x+6,y-40,x+45,y-20);
        }
        char str[10];
        sprintf(str,"%d",arr[i]);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(x+4,y-20,str);
    }

}
void selection_sort()
{
    char str[10];

    int visited[20];
    memset(visited,0,sizeof(visited));

    int arr[N];
    srand(time(NULL));
    for(int i=0; i<N; i++)
    {
        arr[i]=random_int(MIN,MAX);

    }
    draw_selection_array(arr,visited,N,-1,-1);

    for(int i=0; i<N; i++)
    {
        int min=i;

        for(int j=i; j<N; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            cleardevice();
            settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
            outtextxy(100,0,"Selection Sort Visulization");
            outtextxy(100,100,"MIN : ");
            sprintf(str,"%d",arr[min]);
            outtextxy(270,100,str);
            draw_selection_array(arr,visited,N,j,YELLOW);

            delay(500);

        }
        visited[i]=1;
        cleardevice();
        settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
        outtextxy(100,0,"Selection Sort Visulization");
        draw_selection_array(arr,visited,N,min,GREEN);
        delay(500);
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }


}

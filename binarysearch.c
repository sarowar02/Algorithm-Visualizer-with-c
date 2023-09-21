#include "algo_visualizer.h"
void binary_search(int *arr, int size, int sr)
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    draw_bin_array(arr, size, -1, -1, -1, sr);

    int l = 0, r = size - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
         delay(1500);
        draw_bin_array(arr, size, l, mid, r, sr);

        if (arr[mid] == sr)
        {
            draw_bin_array(arr, size, l, mid, r, sr);
            outtextxy(300, 500, "value found!");
            return;
        }
        else if (sr > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    outtextxy(300, 500, "value not found!");
    return;
}

void draw_bin_array(int *arr, int size, int l, int mid, int r, int sr)
{
    cleardevice();
    char str[10];
    outtextxy(200, 100, "BInary search visualization");
    //outtextxy(200, 300, "Press any key to continue!");

    outtextxy(200, 130, "Searching for ");
    sprintf(str, "%d", sr);
    outtextxy(400, 130, str);


    outtextxy(350,170,"l : ");
    sprintf(str, "%d", l);
    outtextxy(400,170,str);

    outtextxy(350,200,"r : ");
    sprintf(str, "%d", r);
    outtextxy(400,200,str);

    outtextxy(350,230,"mid : ");
    sprintf(str, "%d", mid);
    outtextxy(400,230,str);
   int low,high;
    for (int i = 0; i < size; i++)
    {
        int x=x_margin+i*(x_margin+box_width);
        rectangle(x,400,x+box_width,400+box_height);
        if (i == l)
        {
            setfillstyle(SOLID_FILL, RED);
            floodfill(x + 2, 402, WHITE);
            low=x;
        }
        if (i == r )
        {
            setfillstyle(SOLID_FILL, RED);
            floodfill(x + 2, 402, WHITE);
            high=x;
        }
        if (i == mid)
        {
           readimagefile("arrow.jpeg",x+10,340,x+45,390);
            if (arr[mid] == sr)
                setfillstyle(SOLID_FILL, GREEN);
            else
                setfillstyle(SOLID_FILL, YELLOW);

            floodfill(x + 2, 402, WHITE);
        }

        char str[10];
        sprintf(str, "%d", arr[i]);
        outtextxy(x + 10, 410, str);
    }
    rectangle(low,450,high+box_width,453);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(low+2,452,WHITE);

}

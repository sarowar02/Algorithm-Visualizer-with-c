#include "algo_visualizer.h"
int count=0;
void drawString(char *text,char *substring) {
    outtextxy(100,50,"Substring Checking ( Brute Force Method )");
    int x=30,boxWidth=40;
    char ch[5];
    int sublen=strlen(substring);
    for(int i=0;i<strlen(text);i++)
    {
        sprintf(ch,"%c",text[i]);
        rectangle(x,398,x+boxWidth,398+box_height);
        outtextxy(x+8,400,ch);
        if(i<sublen)
        {
            sprintf(ch,"%c",substring[i]);
            rectangle(x,498,x+boxWidth,498+box_height);
            outtextxy(x+8,500,ch);
        }
        x+=40;
    }


}
void drawArrow(int x,int y)
{

    readimagefile("arrow.jpeg",x,y,x+20,y+30);
}
void substrVis()
{
    count=0;
    char str[20];
    char *text[4]={"helloworldhelloworld","abcababababababccdefabab","abaaaaaaabagjghaabaa","abcdefghijkbcdefghpbbcde"};
    char *substring[4]={"world","ab","aa","bcdefgh"};
    srand(time(NULL));
    int no=random_int(0,4);


    int textLength = strlen(text[no]);
    int substringLength = strlen(substring[no]);
    int count=0;
    drawString(text[no],substring[no]);
    delay(200);
    int x=30;

    for (int i = 0; i <= textLength - substringLength; i++) {

       int j;
       int s=30;
       int m=x;
        for (j = 0; j < substringLength; j++) {

            drawArrow(m + 3 + j * 40, 360);
            drawArrow(s + 3+ j * 40, 460);

//            printf("%c %c\n",text[no][i+j],substring[no][j]);
            delay(500);
            if (text[no][i + j] != substring[no][j]) {
                outtextxy(200,200,"not matched");
                delay(500);
                cleardevice();
                drawString(text[no],substring[no]);
                break;
            }
            else
            {

                outtextxy(200,200,"matched");
                delay(500);
            }


        }
        x+=40;


        if (j == substringLength) {
            count++;
            sprintf(str,"Count : %d",count);
            outtextxy(600,200,str);
            delay(500);
            cleardevice();
            drawString(text[no],substring[no]);

        }
    }



            sprintf(str,"Count : %d",count);
            outtextxy(600,200,str);

}


#include "algo_visualizer.h"

#define MAX_STRING_LENGTH 100
#define INITIAL_X1 150
#define INITIAL_X2 550
#define Y_COORDINATE 400
#define MOVEMENT_STEP 2
#define ANIMATION_DELAY 300

void visu_string_concat() {
    char str[2][MAX_STRING_LENGTH] = {"HELLO", "WORLD"};

    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);


    int x1 = INITIAL_X1;
    int x2 = INITIAL_X2;

    drawString(0,x1,str[0]);
    drawString(0,x2,str[1]);
    delay(1000);
    concat(x1,x2,str[0],str[1]);
}

int drawString(int index,int x1,char *str)
{
     int margin=10,x;
     int b_width=40,b_height=50;

    for(int i=index;i<strlen(str);i++)
    {
        setcolor(WHITE);
        outtextxy(200,100,"String Concatenation");

        x=x1+i*(margin+b_width);
        rectangle(x,400,x+b_width,400+b_height);
        setfillstyle(SOLID_FILL,RED);

        char anstr[10];
        sprintf(anstr, "%c",str[i] );
        setbkcolor(RED);
        outtextxy(x +3, 410, anstr);
        if(str[i]=='O' || str[i]=='o')
        {
            floodfill(x+12,412,WHITE);

        }
        floodfill(x+2,402,WHITE);

    }
    return x+b_width;
}

void concat(int x1,int x2,char *str1,char *str2)
{

   int len1=strlen(str1),len2=strlen(str2);
    setbkcolor(BLACK);
   cleardevice();
   str1[len1++]=str2[0];
   drawString(0,x1,str1);
   drawString(1,x2,str2);
   delay(1000);


    setbkcolor(BLACK);
   cleardevice();
   str1[len1++]=str2[1];
   drawString(0,x1,str1);
   drawString(2,x2,str2);
   delay(1000);

   setbkcolor(BLACK);
   cleardevice();
   str1[len1++]=str2[2];
   drawString(0,x1,str1);
   drawString(3,x2,str2);
   delay(1000);

   setbkcolor(BLACK);
   cleardevice();
   str1[len1++]=str2[3];
   drawString(0,x1,str1);
   drawString(4,x2,str2);
   delay(1000);


   setbkcolor(BLACK);
   cleardevice();
   str1[len1++]=str2[4];
   drawString(0,x1,str1);
   drawString(5,x2,str2);
   delay(1000);


   setbkcolor(BLACK);
   cleardevice();
   str1[len1++]=str2[5];
   drawString(0,x1,str1);
   drawString(6,x2,str2);
   delay(1000);

}

void stringHashing()
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(100,100,"String Hashing visulization.");
    char *str="STRINGHASH";
    int x=200;
    int margin=10;
    int boxWidth=40;
    int boxHeight=40;
    char anstr[10];
    for(int i=0;i<strlen(str);i++)
    {

        int y= 200+i*(margin+box_height);
        rectangle(x,y,x+box_width,y+box_height);
        sprintf(anstr,"%c",str[i]);
        outtextxy(x+12,y+3,anstr);

         line(x+boxWidth+50,y+25,x+boxWidth+10+(300),y+25);
         int a=x+boxWidth+20+(300);
         long long arr[]={19,639,17937,286056,13215350,213619407,313648792,826262660,755828194,731209909};
         rectangle(a,y,a+box_width+250,y+box_height);
         sprintf(anstr,"%lld",arr[i]);
         outtextxy(a+2,y+2,anstr);

         delay(1000);

    }

}
void drawPalindrome(int l,int r,int row,char *str)
{
     int b_width=40,b_height=40;
     int margin=10,x,len=strlen(str);

    for(int i=0;i<len;i++)
    {

        x=200+i*(margin+b_width);
        rectangle(x,400,x+b_width,400+b_height);
        char anstr[10];
        sprintf(anstr, "%c",str[i] );
        outtextxy(x + 10, 410, anstr);


        if((i==l || i==r) && (str[l]==str[r]))
        {
            readimagefile("arrow.jpeg",x+6,340,x+45,390);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(x+2,402,WHITE);
            outtextxy(200,200,"matched");
        }
        else if((i==l || i==r) && (str[l]!=str[r]))
        {
            readimagefile("arrow.jpeg",x+6,340,x+45,390);
            setfillstyle(SOLID_FILL,RED);
            floodfill(x+2,402,WHITE);
            outtextxy(200,150,"not matched");
        }
        //else setfillstyle(SOLID_FILL,BLACK);



    }

}

void palindrome()
{
     char str[5][100]={"adcbghba","abffbbcbbffba","0011001100","6512334332156","012223422210"};
     srand(time(NULL));
     int row=random_int(0,4);
     drawPalindrome(0,strlen(str[row])-1,row,str[row]);
      setbkcolor(BLACK);
      cleardevice();
     int l=0,r=strlen(str[row])-1,flag=0;

     while(l<r)
     {
         cleardevice();

        outtextxy(100,100,"Palindrome Checking");
         drawPalindrome(l,r,row,str[row]);
         delay(1000);

         if(str[row][l]!=str[row][r])
         {

             outtextxy(200,300,"NOT PALINDROME");
             flag=1;
             break;
         }
         l++;r--;
     }
     if(!flag)
     outtextxy(200,300,"PALINDROME");

  getch();

}

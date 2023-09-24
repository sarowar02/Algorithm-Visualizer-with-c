#include "algo_visualizer.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NODE_RADIUS 30


void draw_bfs_Graph(struct Point *nodes,int numNodes,int edges[][2],int numEdges)
{
    outtextxy(270, 50, "Breadth-First Search");

     setcolor(LIGHTBLUE);
    for (int i = 0; i < numEdges; i++)
    {
        int nodeA = edges[i][0];
        int nodeB = edges[i][1];

        int x1 = nodes[nodeA].x;
        int y1 = nodes[nodeA].y;
        int x2 = nodes[nodeB].x;
        int y2 = nodes[nodeB].y;

        line(x1, y1, x2, y2);
    }
     setcolor(WHITE);
    for (int i = 0; i < numNodes; i++)
    {
        circle(nodes[i].x, nodes[i].y, NODE_RADIUS);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(nodes[i].x+2, nodes[i].y+2, WHITE);

        char str[10];
        sprintf(str, "%d", i);
        outtextxy(nodes[i].x - 10, nodes[i].y - 60, str);
    }
    outtextxy(700,100,"Log Tracer:");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[0].x+2, nodes[0].y+2,WHITE);
    outtextxy(700,150,"0");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[1].x+2, nodes[1].y+2,WHITE);
    outtextxy(700,200,"0->1");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[2].x+2, nodes[2].y+2,WHITE);
    outtextxy(700,250,"0->2");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[3].x+2, nodes[3].y+2,WHITE);
    outtextxy(700,300,"1->3");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[4].x+2, nodes[4].y+2,WHITE);
    outtextxy(700,350,"1->4");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[5].x+2, nodes[5].y+2,WHITE);
    outtextxy(700,400,"2->5");

    delay(1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(nodes[6].x+2, nodes[6].y+2,WHITE);
    outtextxy(700,450,"2->6");
}


void bfsvis(int startNode)
{
    struct Point nodes[] =
    {
        {400, 200}, {300, 300}, {500, 300}, {250, 400}, {350, 400}, {450, 400}, {550, 400}
    };
    int numNodes = sizeof(nodes) / sizeof(nodes[0]);

    int edges[][2] =
    {
        {0, 2}, {0, 1}, {1, 3}, {1, 4}, {2, 5}, {2, 6}
    };
    int numEdges = sizeof(edges) / sizeof(edges[0]);
    outtextxy(50,500,"Adjacency List: ");
    outtextxy(200,530,"0 => 1 , 2");
    outtextxy(200,560,"1 => 0 , 3 , 4");
    outtextxy(200,590,"2 => 0 , 5 , 6");
    outtextxy(200,620,"3 => 1");
    outtextxy(200,650,"4 => 1");
    outtextxy(200,680,"5 => 2");
    outtextxy(200,710,"6 => 2");

    draw_bfs_Graph(nodes,numNodes,edges,numEdges);

}


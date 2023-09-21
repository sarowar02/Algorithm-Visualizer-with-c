#ifndef ALGO_VISUALIZER_H_INCLUDED
#define ALGO_VISUALIZER_H_INCLUDED

#include<graphics.h>
#include<stdio.h>
#include<time.h>

#define DELAY 500
#define N 15
#define MAX 50
#define MIN 1
#define MAX_STACK_SIZE 5
#define  box_width 60
#define box_height 40
#define x_margin 35

struct Point {
    int x, y;
};

int random_int(int min,int max);
void drawArray(int *arr,int n,int highlight_ind,int color);
void draw_ln_Array(int *arr,int n,int high_ind,int sr);
void linear_search(int *arr,int n,int high_ind);
void binary_search(int *arr, int size, int sr);
void draw_bin_array(int *arr, int size, int l, int mid, int r, int sr);
void bubble_sort(int *arr,int n);
void initQ(struct queue *q);
void enq(struct queue *q,char val);
int deq(struct queue *q);
void showq(struct queue q);
void dfsvis(int node);
void bfsvis(int node);
bool isConnected(int nodeA, int nodeB);
void drawGraph();
void initializeGrid();
void dfs(int row, int col);
void drawGraph();
void draw_bfs_Graph();
void visu_string_concat();
int drawString(int index,int x1,char *str);
void concat(int x1,int x2,char *str1,char *str2);
void draw_bfs_Graph(struct Point *nodes,int numNodes,int edges[][2],int numEdges);
bool issConnected(int nodeA, int nodeB,int edges[][2],int numEdges);
void stringHashing();
void palindrome();
void drawPalindrome(int l,int r,int row,char *str);
void selection_sort();
void draw_selection_array(int *arr,int *visited,int n,int highlight_ind,int color);
#endif // ALGO_VISUALIZER_H_INCLUDED

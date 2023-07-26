#ifndef ALGO_VISUALIZER_H_INCLUDED
#define ALGO_VISUALIZER_H_INCLUDED

#include<graphics.h>
#include<stdio.h>
#include<time.h>

#define DELAY 500
#define N 10
#define MAX 50
#define MIN 40
#define MAX_STACK_SIZE 5
#define  box_width 60
#define box_height 40
#define x_margin 35

int random_int(int min,int max);
void drawArray(int *arr,int n,int highlight_ind,int color);
void draw_ln_Array(int *arr,int n,int high_ind,int sr);
void linear_search(int *arr,int n,int high_ind);
void binary_search(int *arr, int size, int sr);
void draw_bin_array(int *arr, int size, int l, int mid, int r, int sr);
void bubble_sort(int *arr,int n);
void initQ(struct queue *q);
void enq(struct queue *q,int val);
int deq(struct queue *q);
void showq(struct queue q);

#endif // ALGO_VISUALIZER_H_INCLUDED
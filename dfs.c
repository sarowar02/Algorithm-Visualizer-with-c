#include "algo_visualizer.h"
int grid[MAZE_ROWS][MAZE_COLS];
int start_row, start_col;
int end_row, end_col;
int reached_end = 0;
void dfsvis()
{

    // Initialize the grid and draw it.
    initializeGrid();
    drawGrid();

    // Start the DFS from the upper-left cell.
    dfs(start_row,start_col);
}

void initializeGrid()
{
    // Initialize the grid with 0 (no obstacle).
    for (int i = 0; i < MAZE_ROWS; i++)
    {
        for (int j = 0; j < MAZE_COLS; j++)
        {
            grid[i][j] = 0;
        }
    }

    // Randomly add obstacles to the grid (1 represents obstacle).
    // Increase the obstacle density by 15%.
    int total_obstacles = MAZE_ROWS * MAZE_COLS * 25 / 100;
    int added_obstacles = 0;

    while (added_obstacles < total_obstacles)
    {
        int row = rand() % MAZE_ROWS;
        int col = rand() % MAZE_COLS;

        if (grid[row][col] == 0)
        {
            grid[row][col] = 1;
            added_obstacles++;
        }
    }

    // Set the start and end positions.
    start_row = 0;
    start_col = 0;
    end_row = MAZE_ROWS - 1;
    end_col = MAZE_COLS - 1;
}

void drawGrid()
{
    // Draw cell borders.
    for (int i = 0; i < MAZE_ROWS; i++)
    {
        for (int j = 0; j < MAZE_COLS; j++)
        {
            rectangle(j * CELL_SIZE, i * CELL_SIZE, (j + 1) * CELL_SIZE, (i + 1) * CELL_SIZE);
        }
    }

    // Fill cells.
    for (int i = 0; i < MAZE_ROWS; i++)
    {
        for (int j = 0; j < MAZE_COLS; j++)
        {
            if (grid[i][j] == 0)
            {
                // Draw an empty cell.
                setfillstyle(SOLID_FILL, RGB(230, 230, 230)); // Light Gray
            }
            else
            {
                // Draw an obstacle cell.
                setfillstyle(SOLID_FILL, RGB(100, 100, 100)); // Dark Gray
            }
            bar(j * CELL_SIZE + 1, i * CELL_SIZE + 1, (j + 1) * CELL_SIZE - 1, (i + 1) * CELL_SIZE - 1);
        }
    }

    // Draw the start and end positions.
    setfillstyle(SOLID_FILL, CYAN); //
    bar(start_col * CELL_SIZE + 1, start_row * CELL_SIZE + 1, (start_col + 1) * CELL_SIZE - 1, (start_row + 1) * CELL_SIZE - 1);
    setfillstyle(SOLID_FILL, RGB(237, 28, 36)); // Red
    bar(end_col * CELL_SIZE + 1, end_row * CELL_SIZE + 1, (end_col + 1) * CELL_SIZE - 1, (end_row + 1) * CELL_SIZE - 1);
}

void dfs(int row, int col)
{
    if (row < 0 || row >= MAZE_ROWS || col < 0 || col >= MAZE_COLS || grid[row][col] != 0 || reached_end)
    {
        return;
    }

    // Mark the current cell as visited (2 represents visited cell).
    grid[row][col] = 2;

    // Visualization delay (adjust as needed to control the visualization speed).
    delay(100);

    // Draw the visited cell (you can change the color if you like).
    setfillstyle(SOLID_FILL, RGB(0, 162, 232)); // Cyan
    bar(col * CELL_SIZE + 1, row * CELL_SIZE + 1, (col + 1) * CELL_SIZE - 1, (row + 1) * CELL_SIZE - 1);

    // Check if the end is reached.
    if (row == end_row && col == end_col)
    {
        reached_end = 1;
        return;
    }

    // Recursive DFS in all four directions.
    dfs(row - 1, col); // Up
    dfs(row + 1, col); // Down
    dfs(row, col - 1); // Left
    dfs(row, col + 1); // Right
}

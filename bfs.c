#include "algo_visualizer.h"
typedef struct
{
    int row;
    int col;
} Cell;

Cell queue[MAZE_ROWS * MAZE_COLS];
int front = 0, rear = -1;

void enqueue(int row, int col)
{
    rear++;
    queue[rear].row = row;
    queue[rear].col = col;
}

Cell dequeue()
{
    Cell cell = queue[front];
    front++;
    return cell;
}

int isQueueEmpty()
{
    return front > rear;
}

void bfsvis()
{

    int grid[MAZE_ROWS][MAZE_COLS];
int start_row, start_col;
int end_row, end_col;

    //initializeGrid();

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

    //drawGrid();

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
    setfillstyle(SOLID_FILL, GREEN); // Green
    bar(start_col * CELL_SIZE + 1, start_row * CELL_SIZE + 1, (start_col + 1) * CELL_SIZE - 1, (start_row + 1) * CELL_SIZE - 1);
    setfillstyle(SOLID_FILL, RGB(237, 28, 36)); // Red
    bar(end_col * CELL_SIZE + 1, end_row * CELL_SIZE + 1, (end_col + 1) * CELL_SIZE - 1, (end_row + 1) * CELL_SIZE - 1);


    // Initialize visited array and parent arrays.
    int visited[MAZE_ROWS][MAZE_COLS] = {0};

     int parentRow[MAZE_ROWS][MAZE_COLS];
int parentCol[MAZE_ROWS][MAZE_COLS];
    // Start BFS from the start position.
    visited[start_row][start_col] = 1;
    enqueue(start_row, start_col);

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!isQueueEmpty())
    {
        Cell current = dequeue();
        int row = current.row;
        int col = current.col;

        // Visualization delay (adjust as needed to control the visualization speed).
        delay(100);

        // Draw the visited cell (you can change the color if you like).
        setfillstyle(SOLID_FILL, RGB(0, 162, 232)); // Cyan
        bar(col * CELL_SIZE + 1, row * CELL_SIZE + 1, (col + 1) * CELL_SIZE - 1, (row + 1) * CELL_SIZE - 1);

        if (row == end_row && col == end_col)
        {
            // End position reached, break the loop.
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            if (newRow >= 0 && newRow < MAZE_ROWS && newCol >= 0 && newCol < MAZE_COLS &&
                    grid[newRow][newCol] == 0 && !visited[newRow][newCol])
            {
                visited[newRow][newCol] = 1;
                parentRow[newRow][newCol] = row;
                parentCol[newRow][newCol] = col;
                enqueue(newRow, newCol);
            }
        }
    }


    // Trace back the path from the end position to the start position.
    int row = end_row;
    int col = end_col;

    while (row != start_row || col != start_col)
    {
        // Visualization delay for highlighting the path.
        delay(200);

        // Draw the path cell.
        setfillstyle(SOLID_FILL, RGB(255, 0, 0)); // Red
        bar(col * CELL_SIZE + 1, row * CELL_SIZE + 1, (col + 1) * CELL_SIZE - 1, (row + 1) * CELL_SIZE - 1);

        // Move to the parent cell.
        int tempRow = row;
        row = parentRow[tempRow][col];
        col = parentCol[tempRow][col];
    }


}





#include <iostream>
#include <vector>

using namespace std;

// Define the dimensions of the grid
const int ROWS = 8;
const int COLS = 8;

// 8 possible directions to move
const int dr[] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dc[] = {0, 0, 1, -1, 1, -1, 1, -1};

// Function to perform the flood fill
void floodFill(vector<vector<char>>& grid, int r, int c, char targetColor, char replacementColor) {
    if (r < 0 || r >= ROWS || c < 0 || c >= COLS) {
        return; // Out of bounds
    }

    if (grid[r][c] != targetColor) {
        return; // Color is different from the target color
    }

    grid[r][c] = replacementColor; // Fill the current cell

    // Recursively call floodFill for all 8 possible directions
    for (int i = 0; i < 8; ++i) {
        floodFill(grid, r + dr[i], c + dc[i], targetColor, replacementColor);
    }
}

int main() {
    vector<vector<char>> grid = {
        {'W', 'W', 'W', 'L', 'L', 'W', 'W', 'W'},
        {'W', 'W', 'L', 'L', 'L', 'L', 'W', 'W'},
        {'W', 'L', 'L', 'L', 'L', 'L', 'L', 'W'},
        {'W', 'L', 'L', 'L', 'L', 'L', 'L', 'W'},
        {'W', 'W', 'L', 'L', 'L', 'L', 'W', 'W'},
        {'W', 'W', 'L', 'L', 'L', 'L', 'W', 'W'},
        {'W', 'W', 'W', 'L', 'L', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'}
    };

    int startRow = 3;
    int startCol = 4;
    char targetColor = 'L';
    char replacementColor = 'G';

    floodFill(grid, startRow, startCol, targetColor, replacementColor);

    // Print the grid after flood fill
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

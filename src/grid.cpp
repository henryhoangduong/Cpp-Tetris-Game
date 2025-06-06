#include "grid.h"
#include "colors.h"
#include <iostream>
using namespace std;

Grid::Grid() {
  numRows = 20;
  numCols = 10;
  cellSize = 30;
  Initialize();
  colors = GetCellColors();
};

void Grid::Initialize() {
  for (int row = 0; row < numRows; row++) {
    for (int column = 0; column < numCols; column++) {
      grid[row][column] = 0;
    }
  }
}

void Grid::Print() {
  for (int row = 0; row < numRows; row++) {
    for (int column = 0; column < numCols; column++) {
      std::cout << grid[row][column] << " ";
    }
    std::cout << std::endl;
  }
}

void Grid::Draw() {
  for (int row = 0; row < numRows; row++) {
    for (int column = 0; column < numCols; column++) {
      int cellValue = grid[row][column];
      DrawRectangle(column * cellSize + 11, row * cellSize + 11, cellSize - 1,
                    cellSize - 1, colors[cellValue]);
    }
  }
}

bool Grid::IsCellOutside(int row, int col) {
  if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
    return false;
  };
  return true;
}

bool Grid::IsCellEmpty(int row, int column) {
  if (grid[row][column] == 0) {
    return true;
  }
  return false;
}
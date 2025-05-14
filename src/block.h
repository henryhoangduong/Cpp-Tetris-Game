#pragma once
#include <map>
#include <vector>
#include "position.h"
#include "colors.h"
using namespace std;

class Block{
    public:
        Block();
        int id;
        std::map<int, std::vector<Position>> cells;
        std::vector<Position> GetCellPositions();
        void Draw();
        void Move(int rows, int columns);
        void Rotate();
        void UndoRatation();
    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
        int rowOffset;
        int columnOffset;
};
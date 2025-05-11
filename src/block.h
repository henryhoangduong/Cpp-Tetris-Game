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
        void Draw();
    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
};
#pragma once
#include "blocks.cpp"
#include "grid.h"

class Game{
    public:
        Game();
        Grid grid;
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        void Draw();
    private:
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
};
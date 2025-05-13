#include "game.h"
#include <random>
#include <iostream>
using namespace std;
Game::Game(){
    grid=Grid();
    blocks=GetAllBlocks();
    currentBlock=GetRandomBlock();
    nextBlock=GetRandomBlock();
};

Block Game::GetRandomBlock(){
    if(blocks.empty()){
        blocks = GetAllBlocks();
    }
    int randomIndex = rand()%blocks.size();
    Block block = blocks[randomIndex];
    blocks.erase(blocks.begin()+ randomIndex);
    return block;
}

std::vector<Block> Game::GetAllBlocks(){
    return {LBlock(),JBlock(),IBlock(),OBlock(),SBlock(),TBlock(),ZBlock() };
}

void Game::Draw(){
    grid.Draw();
    currentBlock.Draw();
}
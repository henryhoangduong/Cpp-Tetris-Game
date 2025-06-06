#pragma once
#include "blocks.cpp"
#include "grid.h"

class Game {
public:
  Game();
  Grid grid;
  Block GetRandomBlock();
  std::vector<Block> GetAllBlocks();
  void HandleInput();
  void MoveBlockLeft();
  void MoveBlockRight();
  void MoveBlockDown();
  void Draw();
  bool gameOver;

private:
  void RotateBlock();
  bool IsBlockOutside();
  void LockBlock();
  bool BlockFits();
  std::vector<Block> blocks;
  Block currentBlock;
  Block nextBlock;
  void Reset();
};
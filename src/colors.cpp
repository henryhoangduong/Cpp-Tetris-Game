#include "colors.h"
#include <iostream>
using namespace std;

const Color darkGey = {26, 31, 40, 255};
const Color green = {47, 230, 233, 255};
const Color red = {232, 18, 18, 255};
const Color orange = {226, 116, 7, 255};
const Color yellow = {237, 234, 4, 255};
const Color purple = {166, 0, 247, 255};
const Color cyan = {21, 204, 209, 255};
const Color blue = {13, 64, 216, 255};

std::vector<Color> GetCellColors() {
  return {darkGey, green, red, orange, yellow, purple, cyan, blue};
}
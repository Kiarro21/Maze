#include "maze.h"
#include <iostream>

using namespace std;



Maze::Maze(int _height, int _width){
}
/*
Maze::~Maze() {
    for (int i = 0; i < height; i++) {
        delete[] maze[i];
    }
    delete[] maze;
}*/


void Maze::fillMaze() {
}

void Maze::outputMaze() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            if (maze[i][j] == 1) {
                cout << static_cast<char>(176);
                cout << static_cast<char>(176);
            }
            else
                cout << "  ";
        cout << endl;
    }
}
#pragma once
class Maze {
public:
    int height, width;
    int** maze;

    Maze(int _height, int _width);
    ~Maze();
    void fillMaze();
    void outputMaze();
};
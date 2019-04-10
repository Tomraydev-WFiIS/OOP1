#pragma once
#include <iostream>
#include <vector>
#include <string>

class CleverMatrix {
public:
    CleverMatrix(int n);
    CleverMatrix(int* matrixData, int n);
    CleverMatrix(int* matrixData, int n, std::string type);

    int mapIdx(int row, int col)const;
    void print()const;

    CleverMatrix operator*(const CleverMatrix& c)const;
    int& operator()(int i, int j);

private:
    int m_size;
    std::vector<int> m_data;

};
#pragma once
#include <array>

class mySet
{
private:
    std::array<int, 20> array;
    std::array<int, 20> result;
    int lastIndex = 0;

public:
    bool isEmpty();
    bool isFull();
    void insert(int inX);
    void Delete(int inX);
    std::array<int, 20> getArray();
    void printAll();
    mySet Union(mySet inS);
    mySet Intersection(mySet inS);
    mySet(std::array<int, 20> inArray);
};


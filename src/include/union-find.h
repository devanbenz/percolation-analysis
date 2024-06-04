#pragma once
#include <vector>

class UnionFind {
public:
    virtual void connect(int a, int b);

    virtual bool connected(int a, int b);

    virtual int find(int a);

    virtual int count();
private:
    std::vector<int> network_;
};
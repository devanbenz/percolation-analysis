#pragma once
#include "union-find.h"

class QuickFind : public UnionFind {
public:
    explicit QuickFind(int grid_size);

    void connect(int a, int b) override;

    bool connected(int a, int b) override;

    int find(int a) override;

    int count() override;

    void print() override;
};

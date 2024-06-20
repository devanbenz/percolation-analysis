#pragma once
#include <vector>
#include "union-find.h"

class Percolation {
private:
    int grid_size_;
    std::vector<int> grid_;
    std::unique_ptr<UnionFind> union_find_;
    std::vector<int> virtual_top_;
    std::vector<int> virtual_bottom_;
public:
    explicit Percolation(int n, std::unique_ptr<UnionFind> &&uf);

    ~Percolation() = default;

    void open(int row, int col);

    bool is_open(int row, int col);

    bool is_full(int row, int col);

    int number_of_open_sites();

    bool percolates();

    void print_grid();

    void print_top();

    void print_bottom();
};
#pragma once
#include <vector>

class Percolation {
private:
    int grid_size_;
    std::vector<int> grid_;
public:
    explicit Percolation(int n);

    ~Percolation() = default;

    void open(int row, int col);

    bool is_open(int row, int col);

    bool is_full(int row, int col);

    int number_of_open_sites();

    bool percolates();

    void print_grid();
};
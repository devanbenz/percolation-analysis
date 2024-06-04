#include <iostream>
#include "include/percolation.h"

void Percolation::open(int row, int col) {
    if (row > this->grid_size_ || col > this->grid_size_ || row == 0 || col == 0) {
        std::cerr << "bad row or col" << "\n";
        return;
    }

    int index = ((row - 1) * this->grid_size_) + (col - 1);
    this->grid_[index] = 1;
}

bool Percolation::is_open(int row, int col) {
    if (row > this->grid_size_ || col > this->grid_size_ || row == 0 || col == 0) {
        std::cerr << "bad row or col" << "\n";
        return false;
    }

    int index = ((row - 1) * this->grid_size_) + (col - 1);
    return this->grid_[index] == 1;
}

bool Percolation::is_full(int row, int col) {
    return false;
}

int Percolation::number_of_open_sites() {
    return this->union_find_.count()
}

bool Percolation::percolates() {
    return false;
}

void Percolation::print_grid() {
    int grid_n = this->grid_size_;
    int cols = 0;

    for (int i = 0; i < grid_n * grid_n; i++) {
        if (i != 0 && i % grid_n == 0) {
            std::cout << "\n";
        }

        std::cout << this->grid_[i] << "\t";
    }
}

Percolation::Percolation(int n) : grid_size_(n) {
    std::vector<int> grid = {};
    grid.reserve(n);
    for (int i = 0; i < n * n; i++) {
        grid.push_back(0);
    }

    this->grid_ = grid;
}

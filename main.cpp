#include <iostream>
#include "src/include/percolation.h"

int main() {
    Percolation p(5);
    p.open(1,1);
    p.open(2,3);
    p.open(4,3);
    p.open(1,4);

    p.print_grid();

    std::cout << "\n";

    std::cout << p.is_open(1, 1) << " " << p.is_open(5, 1);

    return 0;
}

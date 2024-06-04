#include <iostream>
#include "src/include/percolation.h"

int main() {
    Percolation p(20);
    p.open(1,1);
    p.open(2,3);
    p.open(4,3);
    p.open(1,4);

    p.print_grid();

    std::cout << "\n\n";
    p.print_top();
    std::cout << "\n\t----\t\n";
    p.print_bottom();
    return 0;
}

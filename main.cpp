#include <iostream>
#include "src/include/percolation.h"
#include "src/include/quick-find.h"

int main() {
    std::unique_ptr<UnionFind> qf = std::make_unique<QuickFind>(5);
    qf->connect(2, 3);
    qf->print();
    qf->connect(2, 4);
    qf->print();
    qf->connect(3, 7);
    qf->print();
    qf->connect(13, 22);
    qf->print();

    return 0;
}

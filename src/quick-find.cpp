#include <utility>
#include <iostream>

#include "include/quick-find.h"

void QuickFind::connect(int a, int b) {
    auto components = this->get_components().get();
    int a_id = this->find(a);
    int b_id = this->find(b);

    if (a_id == b_id) { return; }

    for (int i = 0; i < components->size(); i++) {
        if (components->at(i) == a_id) {
            components->at(i) = b_id;
        }
    }

    decrement_count();
}

bool QuickFind::connected(int a, int b) {
    auto components = this->get_components().get();

    if (components->at(a) == components->at(b)) {
        return true;
    }

    return false;
}

int QuickFind::find(int a) {
    auto components = this->get_components().get();

    return components->at(a);
}

int QuickFind::count() {
    return get_count();
}

QuickFind::QuickFind(int grid_size) {
    std::vector<int> vec {};
    vec.reserve(grid_size * grid_size);

    for (int i = 0; i < grid_size * grid_size; i++) {
        vec.push_back(i);
    }
    set_components(std::make_unique<std::vector<int>>(vec));
    set_count(grid_size * grid_size);
}

void QuickFind::print() {
    auto components = this->get_components().get();
    for (auto component : *components) {
        std::cout << component << " ";
    }
    std::cout << "\n";
}

#pragma once
#include <utility>
#include <vector>

class UnionFind {
public:
    virtual ~UnionFind() = default;

    virtual void connect(int a, int b) = 0;

    virtual bool connected(int a, int b) = 0;

    virtual int find(int a) = 0;

    virtual void print() = 0;

    virtual int count() = 0;

   int get_count() {
        return count_;
    }

    void set_count(int components) {
        this->count_ = components;
    }

    void decrement_count() {
        this->count_--;
    }

    std::shared_ptr<std::vector<int>> get_components() {
        return this->components_;
    }

    void set_components(std::shared_ptr<std::vector<int>> components) {
        this->components_ = std::move(components);
    }
private:
    int count_;
    std::shared_ptr<std::vector<int>> components_;
};
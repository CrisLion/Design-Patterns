#pragma once
#include "SortStrategy.hpp"

class Context {
private:
    SortStrategy* _strategy;

public:
    Context(SortStrategy* strategy) : _strategy(strategy){}

    void SetStrategy(SortStrategy* strategy) {
        delete this->_strategy;
        _strategy = strategy;
    }

    void doSomeBussinessLogic(const std::vector<int>& data) const {
        _strategy->execute(data);
    }

};
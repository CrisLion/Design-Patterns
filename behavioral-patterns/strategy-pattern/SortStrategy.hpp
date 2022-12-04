#pragma once
#include <vector>

class SortStrategy{
public:
    virtual ~SortStrategy() = default;
    virtual void execute(const std::vector<int>& data) const = 0;
};

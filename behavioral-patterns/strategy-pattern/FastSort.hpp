#pragma once
#include "SortStrategy.hpp"
#include <iostream>

class FastSort : public SortStrategy{
private:

    void heapify(std::vector<int>& arr, size_t N, int i) const {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
    
        if (left < N && arr[left] > arr[largest])
            largest = left;
    
        if (right < N && arr[right] > arr[largest])
            largest = right;
    
        if (largest != i) {
            std::swap(arr[i], arr[largest]);
            heapify(arr, N, largest);
    }
}

public:
    void execute(const std::vector<int>& data) const override{
        
        std::cout<<"Using fast sort"<<std::endl;

        std::vector<int> _data = data;

        //Building max heap
        for (int i = _data.size() / 2 - 1; i >= 0; i--)
            heapify(_data, _data.size(), i);
 
        // Heap sort
        for (int i = _data.size() - 1; i >= 0; i--) {
            std::swap(_data[0], _data[i]);
            heapify(_data, i, 0);
        }

        //Showing sorted vector
        for(int &e : _data){
            std::cout<<e<<" ";
        }
        std::cout<<std::endl;
    }
};
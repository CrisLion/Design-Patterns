#pragma once
#include "SortStrategy.hpp"
#include <iostream>

class SlowSort : public SortStrategy{
public:
    void execute(const std::vector<int>& data) const override {
        
        std::cout<<"Using slow sort"<<std::endl;

        std::vector<int> _data = data;

        //Swap Sort implementation
        for(int i =0 ; i < _data.size()-1; i++){
            for(int j = i+1; j < _data.size(); j++){
                if (_data[i] > _data[j]){
                    std::swap(_data[i],_data[j]);
                }
            }
        }
        //Showing sorted vector
        for(int &e : _data){
            std::cout<<e<<" ";
        }
        std::cout<<std::endl;
    }
};
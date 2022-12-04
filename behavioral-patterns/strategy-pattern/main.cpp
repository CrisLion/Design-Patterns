#include "Context.hpp"
#include "SlowSort.hpp"
#include "FastSort.hpp"
#include "SortingEnum.hpp"

int main(){

    std::vector<int> vec = {74,14,11,67,3401,453};
    
    SortingEnum sortingEnum = SortingEnum::SLOWSORT;
    Context* context;

    if (sortingEnum == SLOWSORT)
        context = new Context(new SlowSort());
    
    else
        context = new Context(new FastSort());
    
    context->doSomeBussinessLogic(vec);

    return 0;
}
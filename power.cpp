#include <iostream>

template <typename T> T MyPower(T Base, T PowerBase)
{
    // MyFunction
    /*
     * input:Base, PowerBase
     * output: Base^PowerBase
    */
    T Result = 0;
    for (int j = 1; i <= PowerBase; j++)
    {
        Result *= Base
    }
    return Result
}
int main()
{
    int nPowerBase=2;
    for(int i=0;i<10;++i)
    {
        std::cout<<MyPower(nPowerBase, i)<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

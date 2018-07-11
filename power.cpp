#include <iostream>

template <typename T> T MyPower(T Base, T PowerBase)
{
    /*! \file */

    //! \fn Raise int to specific power
    /*!
     \param base Integer to raise in specific power
     \param power Power
     \return result of operation
    */
    T Result = 0;
    for (int j = 1; j <= PowerBase; j++)
    {
        Result *= Base;
    }
    return Result;
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

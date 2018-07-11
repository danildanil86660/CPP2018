#include <iostream>
int main()
{
    int nPowerBase=2;
    for(int i=0;i<10;++i)
    {
        int nBase;
        nBase=1;
        for(int t=1;t<=i;++t)
        nBase=nBase*nPowerBase;
        std::cout<<p<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

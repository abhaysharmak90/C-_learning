#include<iostream>
#include<string>

template <typename t,typename b>
t adding(const t &a,const b &c)
{
    static size_t counter{0};
    ++counter;
    std::cout<<"this is called "<<counter<<" times\n";
    return a+c;
}

int main()
{
    
    std::cout<<adding(9,10)<<std::endl;                                                         
    std::cout<<adding(9.1,10)<<std::endl;                                                         
    std::cout<<adding(9.6,10.4)<<std::endl;                                                         
    std::cout<<adding(9.7652865252765748564785,10.56249782789253478)<<std::endl;                                                         
    std::cout<<adding(9.7652865252765748564785,10.56249782789253478)<<std::endl;                                                         
    std::cout<<adding(std::string("abh"),"ay")<<std::endl;                                                         
    std::cout<<adding(std::string("abhay"),"sharma")<<std::endl;                                                         
    std::cout<<adding(std::string("abhay"),"sharma")<<std::endl;                                                         
    std::cout<<adding(std::string("abhay"),"sharma")<<std::endl;                                                         
    std::cout<<adding(9,15)<<std::endl;                                                         
}


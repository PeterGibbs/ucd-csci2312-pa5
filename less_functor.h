//
// Created by Peter on 5/8/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H


#include <cstring>
namespace CS2312 {
    template <typename T>
class less{

    public:
    less(){}
    bool operator() (const T & rhs,const T& lhs){
        return rhs<lhs;
    }
};
    template<>
    class less<char*>{
    public:
        bool operator() (const char* lhs,const char* rhs) {
            return strncmp(rhs,lhs,2);

        }
    };
}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H

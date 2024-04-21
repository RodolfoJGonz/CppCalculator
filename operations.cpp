//
// Created by Rod Snap on 4/20/2024.
//

#include "operations.h"


template<typename T>
T operations<T>::addition(T a, T b) {
//    if(sizeof(a) != 4 || sizeof(b) != 4)
//        return -1;
    return a + b;
}

template<typename T>
T operations<T>::subtraction(T a, T b) {
    return a - b;
}

template<typename T>
T operations<T>::multiplication(T a, T b){
    return a * b;
}
template<typename T>
T operations<T>::division(T a, T b){
    return (a / b*1.0);
}
template class operations<int>;
template class operations<float>;

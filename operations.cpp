//
// Created by Rod Snap on 4/20/2024.
//

#include "operations.h"


template<typename T>
T operations<T>::addition(T a, T b) {
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

template<typename T>
T operations<T>::square(T a){
    return a*a;
}

template<typename T>
T operations<T>::power(T a, T b){
    T product = a;
    for(int i =0; i< b; i++)
        product = product*a;
    return product;
}

//template<typename T>
//T operations<T>::sqrt(T a)
//{
//    return  power(a, 1/2);
//}

template class operations<int>;
template class operations<float>;

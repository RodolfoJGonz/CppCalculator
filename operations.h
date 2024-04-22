//
// Created by Rod Snap on 4/20/2024.
//

#ifndef CPPCALCULATOR_OPERATIONS_H
#define CPPCALCULATOR_OPERATIONS_H

template <typename T>
class operations {
public:
    T addition(T a, T b);
    T subtraction(T a, T b);
    T multiplication(T a, T b);
    T division(T a, T b);
    T square(T a);
    T power(T a, T b);
    T sqrt(T a);

};

//#include "operations.cpp"
#endif //CPPCALCULATOR_OPERATIONS_H

#include <iostream>
#include <cstdint>
#include "alg.h"

using namespace std;

//проверка числа на простоту
bool checkPrime(uint64_t value) {
    
    if (value == 1) {
        return false;
    }

    else if ((value == 2) || (value==3) || (value==5) || (value==7)) {
        return true;
    }

    else if ((value % 2 == 0) || (value%3==0) || (value%5==0) || (value%7==0)) {
        return false;
    }

    else {
        return true;
    }

}

//нахождение n-ого простого числа (в ряду)
uint64_t nPrime(uint64_t n) {

    const int size = 1000000;
    int h = 0;

    uint64_t arr[size];
    for (int i = 0; i < size; i++) {
        if (((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0)) || ((i == 2) || (i == 3) || (i == 5) || (i == 7))){
            arr[h++] = i;
        }
    }

    return arr[n - 1];
}

//нахождение ближайшего следующего простого числа
uint64_t nextPrime(uint64_t value) {

    int size = 1000000;
    uint64_t res;
    
    for (int i = value+1; i < size; i++) {
        if (((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0)) || ((i == 2) || (i == 3) || (i == 5) || (i == 7))) {
            res = (uint64_t)i;
            break;
        }
        else {
            continue;
        }
    }
    return res;
}

//сумма всех чисел до hbound (не включая его)
uint64_t sumPrime(uint64_t hbound) {

    uint64_t summ = 0;

    for (int i = 0; i < hbound; i++) {
        if (((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0)) || ((i == 2) || (i == 3) || (i == 5) || (i == 7))) {
            summ += (uint64_t)i;
        }
    }

    return summ;

}

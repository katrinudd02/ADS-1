#include <iostream>
#include <cstdint>
#include "alg.h"

using namespace std;

//проверка числа на простоту
bool checkPrime(uint64_t value) {
    
    if (value == 1) {
        return false;
    }

    else if ((value == 2) or (value==3) or (value==5) or(value==7)) {
        return true;
    }

    else if ((value % 2 == 0) or (value%3==0) or (value%5==0) or (value%7==0)) {
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

    int arr[size];
    for (int i = 0; i < size; i++) {
        if (((i % 2 != 0) and (i % 3 != 0) and (i % 5 != 0) and (i % 7 != 0)) or ((i == 2) or (i == 3) or (i == 5) or (i == 7))){
            arr[h++] = i;
        }
    }

    return arr[n - 1];
}

//нахождение ближайшего следующего простого числа
uint64_t nextPrime(uint64_t value) {

    int size = 1000000;
    
    for (int i = value+1; i < size; i++) {
        if (((i % 2 != 0) and (i % 3 != 0) and (i % 5 != 0) and (i % 7 != 0)) or ((i == 2) or (i == 3) or (i == 5) or (i == 7))) {
            return i;
            break;
        }
        else {
            continue;
        }
    }
    
}

//сумма всех чисел до hbound (не включая его)
uint64_t sumPrime(uint64_t hbound) {

    int summ = 0;

    for (int i = 0; i < hbound; i++) {
        if (((i % 2 != 0) and (i % 3 != 0) and (i % 5 != 0) and (i % 7 != 0)) or ((i == 2) or (i == 3) or (i == 5) or (i == 7))) {
            summ += i;
        }
    }

    return summ;
}

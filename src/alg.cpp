// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

//проверка числа на простоту
bool checkPrime(uint64_t value) {
    bool flag = true;
    if (value < 2) flag = false;
    int k = 2;
    while (k * k <= value && flag) {
        if (value % k == 0)
            flag = false;
        k++;
    }
    return flag;
}

//нахождение n-ого простого числа (в ряду)
uint64_t nPrime(uint64_t n) {
    uint64_t i = 0;
    while (n > 0) {
        while (!checkPrime(++i)) {
        }
        n--;
    }
    return i;
}

//нахождение ближайшего следующего простого числа
uint64_t nextPrime(uint64_t value) {
    uint64_t i;
    i = value;
    while (!checkPrime(++i)) {
    }

    return i;
}

//сумма всех чисел до hbound (не включая его)
uint64_t sumPrime(uint64_t hbound) {
    uint64_t summ = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            summ += i;
        }
    }
    return summ;
}

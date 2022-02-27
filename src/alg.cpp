#include <iostream>
#include <cstdint>
#include "alg.h"

using namespace std;

//проверка числа на простоту
bool checkPrime(uint64_t value) {
    
    bool flag = false;
    if (((value % 2 != 0) && (value % 3 != 0) && (value % 5 != 0) && (value % 7 != 0)) || (value == 2) || (value == 3) || (value == 5) || (value == 7)) {
        flag = true;
    }
    return flag;
}

//нахождение n-ого простого числа (в ряду)
uint64_t nPrime(uint64_t n) {

    //const uint64_t size = 1000000;
    //uint64_t h = 0;
    //uint64_t value=0;
    //for (uint64_t i = 2; i < size; i++) {
    //    if (checkPrime(i)) {
    //        h++;
    //        if (h == n) {
    //            value = i;
    //            break;
    //        }
    //    }
    //}

    uint64_t i = 0;
    while (n > 0) {
        while (!checkPrime(i)) {
            i++;
        }
        n--;
    }
    return i;
}

//нахождение ближайшего следующего простого числа
uint64_t nextPrime(uint64_t value) {

    //const uint64_t size = 1000000;
    //uint64_t res=0;
    uint64_t i;
    //
    //for (i = value+1; i < size; i++) {
    //    if (checkPrime(i)) {
    //        res = i;
    //        break;
    //    }
    //}
    i = value + 1;
    while (!checkPrime(i)) {
        i++;
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

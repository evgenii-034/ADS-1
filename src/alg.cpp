// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
if (value > 1) {
for (uint64_t i = 2; i < value; i++) {
if (value % i == 0)
return false;
}
return true;
} else
return false;
// вставьте код функции
}
uint64_t nPrime(uint64_t n) {
  int b = 0;
    for (uint64_t i = 2; ; ++i) {
if (checkPrime(i)) {
++b;
if (b == n) {
return i;
}
}
}
// вставьте код функции
}
uint64_t nextPrime(uint64_t value) {
for (uint64_t i = value + 1; ; ++i) {
if (checkPrime(i)) {
return i;
}
}
 // вставьте код функции
}
uint64_t sumPrime(uint64_t hbound) {
uint64_t summ = 0;
for (uint64_t i = 0; i < hbound; ++i) {
if (checkPrime(i))  {
summ += i;
}
}
return summ;
// вставьте код функции
}

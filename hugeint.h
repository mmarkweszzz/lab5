#ifndef HUGEINT_H
#define HUGEINT_H
#include <iostream>
#include <string>
using namespace std;
class HugeInt{
public:
friend ostream &operator <<(ostream&,  HugeInt&);
friend istream &operator >>(istream&, HugeInt &);
HugeInt &operator=(HugeInt);
HugeInt &operator+(HugeInt);
HugeInt &operator-(HugeInt);

HugeInt(int j);



private:
int a;
string b;
};
#endif

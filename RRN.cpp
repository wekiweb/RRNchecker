#include <iostream>
using namespace std;

int toInt(const char singleDigit)
{
    return (int)singleDigit - '0';
}

int main()
{
    char RRN[13];
    int summ = 0;

    cout << "Your RRN: ";
    cin >> RRN;

    summ =  (toInt(RRN[0])*2);
    summ+=  (toInt(RRN[1])*3);
    summ+=  (toInt(RRN[2])*4);
    summ+=  (toInt(RRN[3])*5);
    summ+=  (toInt(RRN[4])*6);
    summ+=  (toInt(RRN[5])*7);
    summ+=  (toInt(RRN[6])*8);
    summ+=  (toInt(RRN[7])*9);
    summ+=  (toInt(RRN[8])*2);
    summ+=  (toInt(RRN[9])*3);
    summ+= (toInt(RRN[10])*4);
    summ+= (toInt(RRN[11])*5);

    summ %= 11;
    summ = 11-summ;
    summ %= 10;

    cout << "summ: "<<summ << endl;
    cout << "Parity Digit: "<<toInt(RRN[12]) << endl;

    return 0;
}

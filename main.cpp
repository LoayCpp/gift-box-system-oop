#include <iostream>
#include "clsGift.h"
using namespace std;

void printInfoForGift(clsGift &gift)
{
    cout << "\n=========================\n";
    cout << "\t Gift\n";
    cout << "=========================\n";

    static short count = 1;

    cout << "box (" << count << ")\n";
    cout << "Rings     : " << gift.getNumRing() << endl;
    cout << "Necklaces : " << gift.getNumNecklaces() << endl;
    cout << "Bracelets : " << gift.getNumBracelets() << endl;
    cout << "Total price  :" << gift.totalResult() << "$" << endl;

    count++;
}

int main()
{

    clsGift gift1(2, 1, 0), gift2(1, 0, 2);
    clsGift gift3 = gift1 + gift2;

    printInfoForGift(gift1);
    printInfoForGift(gift2);
    printInfoForGift(gift3);
    ++gift1;
    printInfoForGift(gift1);

    (gift1 == gift2) ? cout << "\nequal" : cout << "\nNot Equal\n";
}

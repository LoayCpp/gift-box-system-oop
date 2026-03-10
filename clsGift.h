#pragma once
#include <iostream>
#include <string>
using namespace std;

class clsGift
{

    int _numRing;
    int _numNecklaces;
    int _numBracelets;

    const float _priceRing = 30.00f;
    const float _priceNecklaces = 10.00f;
    const float _priceBracelets = 20.00f;

public:
    clsGift()
    {
        _numBracelets = 0;
        _numNecklaces = 0;
        _numRing = 0;
    }
    clsGift(int numRing, int numNecklaces, int numBracelets)
    {

        _numRing = numRing;
        _numNecklaces = numNecklaces;
        _numBracelets = numBracelets;
    }

    void setNumRing(int numRing)
    {
        _numRing = numRing;
    }

    void setNumNecklaces(int numNecklaces)
    {
        _numNecklaces = numNecklaces;
    }

    void setNumBracelets(int numBracelets)
    {
        _numBracelets = numBracelets;
    }

    int getNumRing() const
    {
        return _numRing;
    }

    int getNumNecklaces() const
    {
        return _numNecklaces;
    }

    int getNumBracelets() const
    {
        return _numBracelets;
    }

    float getPriceRing() const
    {
        return _priceRing;
    }

    float getPriceNecklaces() const
    {
        return _priceNecklaces;
    }

    float getPriceBracelets() const
    {
        return _priceBracelets;
    }
    float resultRings() const
    {

        return (getNumRing() * getPriceRing());
    }
    float resultNecklaces() const
    {

        return (getNumNecklaces() * getPriceNecklaces());
    }
    float resultBracelets() const

    {

        return (getNumBracelets() * getPriceBracelets());
    }

    float totalResult() const
    {

        return resultBracelets() + resultNecklaces() + resultRings();
    }
    bool operator==(const clsGift &gift)
    {

        return (getNumRing() == gift.getNumRing() && getNumNecklaces() == gift.getNumNecklaces() && getNumBracelets() == gift.getNumBracelets());
    }
    clsGift operator+(const clsGift &gift)
    {

        clsGift result;
        result.setNumRing(getNumRing() + gift.getNumRing());
        result.setNumNecklaces(getNumNecklaces() + gift.getNumNecklaces());
        result.setNumBracelets(getNumBracelets() + gift.getNumBracelets());

        return result;
    }
    clsGift operator++()
    { 

        _numRing++;
        _numNecklaces++;
        _numBracelets++;

        return *this;
    }
    clsGift operator++(int)
    {
        clsGift temp = *this;
        _numRing++;
        _numNecklaces++;
        _numBracelets++;

        return temp;
    }
};
/* 
 * File:   CHammingDistance.cpp
 * Author: Vasu
 * 
 * Created on October 13, 2016, 10:01 PM
 */

#include "CHammingDistance.hpp"

/**
 *  A function to calculate the Hamming distance between
 *  two strings
 * 
 * @param str - String1
 * 
 * @param str1 - String2
 * 
 * @return Hamming distance between str1 & str2; 
 *        -1 if strings are not equal in length
 */

int CHammingDistance::CalculateHammingDistance(std::string str, std::string str1)
{
    if (str.length() !=str1.length()){
        std::cout << "Please enter two strings of equal length " ;
        return -1;
    }
    int dist=0; int length =str.length();
    for (int i=0;i<length;++i)
    {
        if (str[i] !=str1[i])
            ++dist; 
    }
    return dist;
}

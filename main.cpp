

/* 
 * File:   main.cpp
 * Author: Vasu Ranachandran
 *
 * Created on October 13, 2016, 6:24 PM
 * Language: C++; g++
 * Platform: OSX 10.11, NetBeans 8.2
 */

#include <cstdlib>
#include <iostream>
#include <cctype>
#include <string>
#include "CHammingDistance.hpp"

using namespace std;

int main(int argc, char** argv) {
    if (argc == 3) {
        std::string str = argv[1];
        std::string str1 = argv[2];
        CHammingDistance hammingdistance;
        int dist = hammingdistance.CalculateHammingDistance(str,str1);
        if (dist >=0)
          cout <<"Hamming Distance Between "<< str<<" "<<str1 << " is:  " << dist;
    } else {
        cout << "Please enter two strings find to the hamming distance" << "\n";
    }
    return 0;
}


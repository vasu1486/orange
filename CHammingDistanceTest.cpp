

#define BOOST_TEST_MODULE TEST_SUITE
#include <boost/test/unit_test.hpp>

#include "CHammingDistance.hpp"


/**
 *  A Test case to compare two strings of equal length
 */

BOOST_AUTO_TEST_CASE(test1) {
    CHammingDistance hammingDistnce;
    std::string str1 ="karolin";
    std::string str2 ="kathrin";
    int dist = hammingDistnce.CalculateHammingDistance(str1, str2);
    BOOST_REQUIRE_EQUAL(dist, 3);  
}

/**
 *  A Test case to compare two binary strings
 *   of equal lengths
 */

BOOST_AUTO_TEST_CASE(test2) {
    CHammingDistance hammingDistnce;
    std::string str1 ="1011101";
    std::string str2 ="1001001";
    int dist = hammingDistnce.CalculateHammingDistance(str1, str2);
    BOOST_REQUIRE_EQUAL(dist, 2);  
}

/**
 *  A Test case to compare two  strings
 *   of unequal lengths
 */
BOOST_AUTO_TEST_CASE(test3) {
    CHammingDistance hammingDistnce;
    std::string str1 ="abcd";
    std::string str2 ="abc";
    int dist = hammingDistnce.CalculateHammingDistance(str1,str2);
    BOOST_REQUIRE_EQUAL(dist, -1);  
}
/**
 *  A Test case to compare two natural numbered 
 *  strings of equal lengths
 */

BOOST_AUTO_TEST_CASE(test4) {
    CHammingDistance hammingDistnce;
    std::string str1 ="2173896";
    std::string str2 ="2233796";
    int dist = hammingDistnce.CalculateHammingDistance(str1,str2);
    BOOST_REQUIRE_EQUAL(dist, 3);  
}

/**
 *  A Test case to compare two empty strings of equal lengths
 */
BOOST_AUTO_TEST_CASE(test5) {
    CHammingDistance hammingDistnce;
    std::string str1 ="";
    std::string str2 ="";
    int dist = hammingDistnce.CalculateHammingDistance(str1, str2);
    BOOST_REQUIRE_EQUAL(dist, 0);  
}

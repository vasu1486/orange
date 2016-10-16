

#define BOOST_TEST_MODULE SIMPLEST_TEST_SUITE
#include <boost/test/unit_test.hpp>

#include "CHammingDistance.hpp"


/**
 *  A Test case to compare two strings of equal length
 */

BOOST_AUTO_TEST_CASE(test1) {
    CHammingDistance hammingDistnce;
    int dist = hammingDistnce.CalculateHammingDistance("karolin", "kathrin");
    BOOST_REQUIRE_EQUAL(dist, 3);  
}

/**
 *  A Test case to compare two binary strings
 *   of equal lengths
 */

BOOST_AUTO_TEST_CASE(test2) {
    CHammingDistance hammingDistnce;
    int dist = hammingDistnce.CalculateHammingDistance("1011101", "1001001");
    BOOST_REQUIRE_EQUAL(dist, 2); // basic test 
}

/**
 *  A Test case to compare two  strings
 *   of unequal lengths
 */
BOOST_AUTO_TEST_CASE(test3) {
    CHammingDistance hammingDistnce;
    int dist = hammingDistnce.CalculateHammingDistance("abcd", "abc");
    BOOST_REQUIRE_EQUAL(dist, -1); // basic test 
}
/**
 *  A Test case to compare two natural numbered 
 *  strings of equal lengths
 */

BOOST_AUTO_TEST_CASE(test4) {
    CHammingDistance hammingDistnce;
    int dist = hammingDistnce.CalculateHammingDistance("2173896", "2233796");
    BOOST_REQUIRE_EQUAL(dist, 3); // basic test 
}

/**
 *  A Test case to compare two empty strings of equal lengths
 */
BOOST_AUTO_TEST_CASE(test5) {
    CHammingDistance hammingDistnce;
    int dist = hammingDistnce.CalculateHammingDistance("", "");
    BOOST_REQUIRE_EQUAL(dist, 0); // basic test 
}
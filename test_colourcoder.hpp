#ifndef TEST_COLOURCODER_HPP
#define TEST_COLOURCODER_HPP

#include "colourcoder.hpp"

void testNumberToPair(int pairNumber,
                      TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(TelCoColorCoder::MajorColor major,
                      TelCoColorCoder::MinorColor minor,
                      int expectedPairNumber);

#endif // TEST_COLOURCODER_HPP

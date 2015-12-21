/*
 * TimeTest.h
 *
 *  Created on: Dec 21, 2015
 *      Author: ashmkapo
 */

#ifndef TIMETEST_H_
#define TIMETEST_H_
#include <cppunit\TestFixture.h>
#include <cppunit\extensions\HelperMacros.h>

class TimeTest : public CppUnit::TestFixture {

    CPPUNIT_TEST_SUITE(TimeTest);
    CPPUNIT_TEST(runTest);
    CPPUNIT_TEST_SUITE_END();

public:
    void runTest();
};

CPPUNIT_TEST_SUITE_REGISTRATION( TimeTest );

#endif /* TIMETEST_H_ */

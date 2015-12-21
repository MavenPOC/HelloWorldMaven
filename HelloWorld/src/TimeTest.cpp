/*
 * TimeTest.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: ashmkapo
 */

#include "Time.h"
#include "TimeTest.h"
using namespace CppUnit;


void TimeTest::runTest()  {

		Time t1(10, 50, 59);
		Time t2(10, 50, 59);
		bool t3 = true;
		CPPUNIT_ASSERT_EQUAL(t1.equals(t2), t3);

	}



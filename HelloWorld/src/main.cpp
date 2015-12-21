/*
 * main.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: ashmkapo
 */

#include<iostream>
/*
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
using namespace CppUnit;*/
#include "Time.h"

using namespace std;

int main() {

	Time t1(10,55,60);
	t1.print();
	Time t2(6,55,60);
	t2.print();

	if(t1.equals(t2))
		cout<<"Its equal";
	else
		cout<<"Not equal";
	return 0;
}

/*
	TestResult controller;
	TestResultCollector result;
	controller.addListener(&result);

	TestRunner runner;
		CppUnit::TestFactoryRegistry &registry = TestFactoryRegistry::getRegistry();
		runner.addTest(registry.makeTest());
		runner.run(controller);

		ofstream xmlFileOut("cpptestresults.xml");
		XmlOutputter xmlOut(&result, xmlFileOut);
		xmlOut.write();*/


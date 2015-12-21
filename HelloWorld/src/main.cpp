/*
 * main.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: ashmkapo
 */

#include<iostream>
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

using namespace CppUnit;
using namespace std;

int main() {

	TestResult controller;
	TestResultCollector result;
	controller.addListener(&result);

	TestRunner runner;
		CppUnit::TestFactoryRegistry &registry = TestFactoryRegistry::getRegistry();
		runner.addTest(registry.makeTest());
		runner.run(controller);

		ofstream xmlFileOut("cpptestresults.xml");
		XmlOutputter xmlOut(&result, xmlFileOut);
		xmlOut.write();

	return 0;

}


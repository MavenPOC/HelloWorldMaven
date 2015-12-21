/** @mainpage ProjectX: bla, bla, bla
*   @par Description:
*   - Point 1 bla, bla, bla
*   - Point 2 bla, bla, bla
*   - Point 3 bla, bla, bla
*
*   @par Next paragraph - more information:
*    bla, bla, bla
*    bla, bla, bla
*/


// $Id$
/**
 * @file sourceFile.cpp
 * Write description of source file here for dOxygen.
 *
 * @brief Can use "brief" tag to explicitly generate comments for file documentation.
 *
 * @author Me
   [Note: depricated practice as CM systems like Subversion will maintain author info and blame logs.]
 * @version 1.69
   [Note: depricated practice as CM systems like Subversion will maintain file history and revision numbers.]
 */
// $Log$

///  Single line comment for dOxygen.

/**
   Write description of function here.
   The function should follow these comments.
   Use of "brief" tag is optional. (no point to it)

   The function arguments listed with "param" will be compared
   to the declaration and verified.

   @param[in]     _inArg1 Description of first function argument.
   @param[out]    _outArg2 Description of second function argument.
   @param[in,out] _inoutArg3 Description of third function argument.
   @return Description of returned value.
 */


#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time :: Time(const int h, const int m, const int s)
  : hour(h), minute (m), second(s)
{}

void Time :: setTime(const int h, const int m, const int s)
{
     hour = h;
     minute = m;
     second = s;
}

void Time :: print() const
{
     cout << setw(2) << setfill('0') << hour << ":"
	<< setw(2) << setfill('0') << minute << ":"
 	<< setw(2) << setfill('0') << second << "\n";
}

bool Time :: equals(const Time &otherTime)
{
     if(hour == otherTime.hour
          && minute == otherTime.minute
          && second == otherTime.second)
          return true;
     else
          return false;
}

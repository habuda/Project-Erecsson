//==================================================================================================
/* 
 * File:   Functions.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 8:56 AM
 */
//==================================================================================================

#include "Functions.hh"

#include <sstream>
#include <string>

//==================================================================================================

std::string intToString(int a_iValue)
{
    std::string lstr;

    std::stringstream strum;
    strum << a_iValue;
    lstr = strum.str();

    return lstr;
}

//==================================================================================================

int WStringToInt(const Wt::WString& s)
{
  const std::string t(s.toUTF8());
  return std::atoi(t.c_str());
}
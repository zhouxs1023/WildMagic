// Geometric Tools, LLC
// Copyright (c) 1998-2014
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.6 (2017/05/26)

//#define GENERATE_XCODE_44

#include <iostream>

#if _MSC_VER >= 1600
// Microsoft Visual Studio 2010
#include "TemplateVC100.h"
#endif

#if _MSC_VER >= 1700
// Microsoft Visual Studio 2012
#include "TemplateVC110.h"
#endif

#if _MSC_VER >= 1800
// Microsoft Visual Studio 2013
#include "TemplateVC120.h"
#endif

#if _MSC_VER >= 1900
// Microsoft Visual Studio 2015
#include "TemplateVC140.h"
#endif

#if _MSC_VER >= 1910
// Microsoft Visual Studio 2017
#include "TemplateVC150.h"
#endif

#ifdef GENERATE_XCODE_44
#include "TemplateXC44.h"
#endif

//----------------------------------------------------------------------------
int main (int numArguments, char** arguments)
{
    if (numArguments != 2)
    {
        std::cout << "usage: GenerateProjects projectname" << std::endl;
        return -1;
    }

    const char* projectName = arguments[1];

#if _MSC_VER >= 1600
    // Microsoft Visual Studio 2010
    TemplateVC100::GenerateDx9(projectName);
    TemplateVC100::GenerateWgl(projectName);
#endif

#if _MSC_VER >= 1700
    // Microsoft Visual Studio 2012
    TemplateVC110::GenerateDx9(projectName);
    TemplateVC110::GenerateWgl(projectName);
#endif

#if _MSC_VER >= 1800
    // Microsoft Visual Studio 2013
    TemplateVC120::GenerateDx9(projectName);
    TemplateVC120::GenerateWgl(projectName);
#endif

#if _MSC_VER >= 1900
    // Microsoft Visual Studio 2015
    TemplateVC140::GenerateDx9(projectName);
    TemplateVC140::GenerateWgl(projectName);
#endif

#if _MSC_VER >= 1910
    // Microsoft Visual Studio 2017
    TemplateVC150::GenerateDx9(projectName);
    TemplateVC150::GenerateWgl(projectName);
#endif

#ifdef GENERATE_XCODE_44
    // For the Macintosh.  The project will be upgraded when you open your
    // current version of Xcode.
    TemplateXC44 generate(projectName);
#endif
    return 0;
}
//----------------------------------------------------------------------------

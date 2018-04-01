// Geometric Tools, LLC
// Copyright (c) 1998-2014
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.5 (2015/11/26)

#include <iostream>
#include "TemplateVC100.h"
#include "TemplateVC110.h"
#include "TemplateVC120.h"
#include "TemplateVC140.h"
#include "TemplateXC44.h"

//----------------------------------------------------------------------------
int main (int numArguments, char** arguments)
{
    if (numArguments != 2)
    {
        std::cout << "usage: GenerateProjects projectname" << std::endl;
        return -1;
    }

    const char* projectName = arguments[1];
    TemplateVC100::GenerateDx9(projectName);
    TemplateVC100::GenerateWgl(projectName);
    TemplateVC110::GenerateDx9(projectName);
    TemplateVC110::GenerateWgl(projectName);
    TemplateVC120::GenerateDx9(projectName);
    TemplateVC120::GenerateWgl(projectName);
    TemplateVC140::GenerateDx9(projectName);
    TemplateVC140::GenerateWgl(projectName);
    TemplateXC44 generate(projectName);
    return 0;
}
//----------------------------------------------------------------------------

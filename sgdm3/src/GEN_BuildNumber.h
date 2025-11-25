// Config/BuildNumber.template ==> $(OBJDIR)/GEN_BuildNumber.h
//////////////////////////////////////////////////////////////////

#ifndef H_VERSION_H
#define H_VERSION_H

//////////////////////////////////////////////////////////////////
// The following strange macros are for the build server. 
// It will replace each of the @TOKEN@ with proper values.
// And then write the result in "$(OBJDIR)/GEN_BuildNumber.h"
// 
// We have to do this for Windows since we can't pass -D args
// when using a .sln.
//////////////////////////////////////////////////////////////////

#define VER_MAJOR_VERSION			5
#define VER_MAJOR_VERSION_STR		"5"

#define VER_MINOR_VERSION			0
#define VER_MINOR_VERSION_STR		"0"

#define VER_MINOR_SUBVERSION		0
#define VER_MINOR_SUBVERSION_STR	"0"

#define VER_BUILD_NUMBER			100
#define VER_BUILD_NUMBER_STR		"101"

#define VER_COPYRIGHT				_T("Copyright (C) 2024 SourceGear LLC. All Rights Reserved.")
#define VER_COPYRIGHT_RC_STR		"Copyright (C) 2024 SourceGear LLC. All Rights Reserved."

#define VER_BUILD_LABEL				_T("dev")

#define VER_ARCH					_T("x64")
#define VER_ARCH_PACKAGE			_T("x64")

#define VER_FLAVOR			_T("Release")
#define VER_FLAVOR_ARCH		_T("Release.x64")

#define VER_CSID			_T("dev-build")

//////////////////////////////////////////////////////////////////

#endif//H_VERSION_H

#!/usr/bin/env python
import os
import sys

env = SConscript("godot-cpp/SConstruct")

# For reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=["src/", "C:\\Users\\jcwil\\code\\grt\\GRT"])
sources = Glob("src/*.cpp")
env["CXXFLAGS"] = r"$( /TP $) /std:c++14"
env["CPPDEFINES"].append("GRT_CXX11_ENABLED")
if env["platform"] == "macos":
    library = env.SharedLibrary(
        "bin/libextensions.{platform}.{target}.framework/libgdextensions.{platform}.{target}".format(**env),
        source=sources,
        LIBPATH='.',
    )
else:
    library = env.SharedLibrary(
        "bin/libextensions{suffix}{SHLIBSUFFIX}".format(**env),
        source=sources,
        LIBS=['libgodot-cpp.windows.template_debug.x86_64', 'grt'],
        LIBPATH=['godot-cpp/bin', "C:\\Users\\jcwil\\code\\grt\\build\\tmp\\Release"],
    )

Default(library)

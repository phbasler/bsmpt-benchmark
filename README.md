# My CMake Template

[![Documentation](https://img.shields.io/badge/Documentation-master-success)](https://phbasler.github.io/cmake-template/documentation)
[![GitHub license](https://img.shields.io/github/license/phbasler/cmake-template.svg)](https://github.com/phbasler/cmake-template/blob/main/LICENSE.md)
[![Latest release](https://badgen.net/github/release/phbasler/cmake-template)](https://github.com/phbasler/cmake-template/releases)

## SETUP
Don't forget to enable gh-pages and actions

## Installation:

### Dependencies


### Alternative Install method 
If you have [conan](https://conan.io/) installed, then you can set the `-D{YourProject}UseConan=ON` flag for cmake and it will download {Dependencies} through [conancenter](https://conan.io/center/).

### build
With the dependencies and options you can build the programm with
  
        mkdir build && cd build  
        cmake (OPTIONS from Dependencies) ..  
        cmake --build . -j  
        cmake --build . -j -t doc
    

The make doc will use doxygen to create the online help in build/html which can be opened locally.


### Unit tests
After calling `make` in the build directory you can call `ctest` to run some checks. 

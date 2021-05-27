# Sample UE4 project of ZMQUE plugin

This project is just a simple project showing how can add 'ZMQUE plugin' to a C++ UE4 project.
There is nothing else particularly useful here.

## Tested Environment

+ Windows10
+ UE4.26.2
+ Visual Studio 2019 16.8.3

## Build

1. Clone this repository with a submodule(ZMQUE).
2. Copy standard asset files in the 'Content' folder from some Third person C++ project.
3. Launch 'zmqtest.uproject'.

## Note

When packaging this project, you need to copy 'libzmq-mt-4_3_1.dll' to 'path/to/packaged/zmqtest/Binaries/Win64' manually.

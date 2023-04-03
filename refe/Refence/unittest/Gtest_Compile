lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest$ ls
gmock (1).pdf  gmock.pdf  GTest-master  GTest-master.zip  unittest.pdf
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest$ cd GTest-master/
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ LS
The program 'LS' is currently not installed. You can install it by typing:
sudo apt install sl
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ ls
CMakeLists.txt  README.md  tests.cpp  whattotest.cpp
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ sudo apt-get install libgtest-dev
[sudo] password for lenovo: 
Reading package lists... Done
Building dependency tree       
Reading state information... Done
The following NEW packages will be installed:
  libgtest-dev
0 upgraded, 1 newly installed, 0 to remove and 98 not upgraded.
Need to get 198 kB of archives.
After this operation, 1,361 kB of additional disk space will be used.
Get:1 http://in.archive.ubuntu.com/ubuntu xenial/universe amd64 libgtest-dev amd64 1.7.0-4ubuntu1 [198 kB]
Fetched 198 kB in 43s (4,582 B/s)                                              
Selecting previously unselected package libgtest-dev:amd64.
(Reading database ... 257121 files and directories currently installed.)
Preparing to unpack .../libgtest-dev_1.7.0-4ubuntu1_amd64.deb ...
Unpacking libgtest-dev:amd64 (1.7.0-4ubuntu1) ...
Setting up libgtest-dev:amd64 (1.7.0-4ubuntu1) ...
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ sudo apt-get install cmake 
Reading package lists... Done
Building dependency tree       
Reading state information... Done
The following additional packages will be installed:
  cmake-data libjsoncpp1
Suggested packages:
  codeblocks eclipse ninja-build
The following NEW packages will be installed:
  cmake cmake-data libjsoncpp1
0 upgraded, 3 newly installed, 0 to remove and 98 not upgraded.
Need to get 3,817 kB of archives.
After this operation, 20.5 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://in.archive.ubuntu.com/ubuntu xenial-updates/main amd64 cmake-data all 3.5.1-1ubuntu3 [1,121 kB]
Get:2 http://in.archive.ubuntu.com/ubuntu xenial/main amd64 libjsoncpp1 amd64 1.7.2-1 [73.0 kB]
Get:3 http://in.archive.ubuntu.com/ubuntu xenial-updates/main amd64 cmake amd64 3.5.1-1ubuntu3 [2,623 kB]
Fetched 3,817 kB in 18s (208 kB/s)                                             
Selecting previously unselected package cmake-data.
(Reading database ... 257189 files and directories currently installed.)
Preparing to unpack .../cmake-data_3.5.1-1ubuntu3_all.deb ...
Unpacking cmake-data (3.5.1-1ubuntu3) ...
Selecting previously unselected package libjsoncpp1:amd64.
Preparing to unpack .../libjsoncpp1_1.7.2-1_amd64.deb ...
Unpacking libjsoncpp1:amd64 (1.7.2-1) ...
Selecting previously unselected package cmake.
Preparing to unpack .../cmake_3.5.1-1ubuntu3_amd64.deb ...
Unpacking cmake (3.5.1-1ubuntu3) ...
Processing triggers for man-db (2.7.5-1) ...
Processing triggers for libc-bin (2.23-0ubuntu11.3) ...
Setting up cmake-data (3.5.1-1ubuntu3) ...
Setting up libjsoncpp1:amd64 (1.7.2-1) ...
Setting up cmake (3.5.1-1ubuntu3) ...
Processing triggers for libc-bin (2.23-0ubuntu11.3) ...
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ ls
CMakeLists.txt  README.md  tests.cpp  whattotest.cpp
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ vi CMakeLists.txt 
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ cmake CMakeLists.txt 
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Error at /usr/share/cmake-3.5/Modules/FindPackageHandleStandardArgs.cmake:148 (message):
  Could NOT find GTest (missing: GTEST_LIBRARY GTEST_MAIN_LIBRARY)
Call Stack (most recent call first):
  /usr/share/cmake-3.5/Modules/FindPackageHandleStandardArgs.cmake:388 (_FPHSA_FAILURE_MESSAGE)
  /usr/share/cmake-3.5/Modules/FindGTest.cmake:205 (FIND_PACKAGE_HANDLE_STANDARD_ARGS)
  CMakeLists.txt:4 (find_package)


-- Configuring incomplete, errors occurred!
See also "/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master/CMakeFiles/CMakeOutput.log".
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ vi CMakeLists.txt 
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ cmake CMakeLists.txt 
-- Found GTest: /usr/lib/libgtest.a  
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - not found
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - found
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ make
Scanning dependencies of target runTests
[ 50%] Building CXX object CMakeFiles/runTests.dir/tests.cpp.o
[100%] Linking CXX executable runTests
[100%] Built target runTests
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ ./runTests 
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from SquareRootTest
[ RUN      ] SquareRootTest.PositiveNos
[       OK ] SquareRootTest.PositiveNos (0 ms)
[ RUN      ] SquareRootTest.NegativeNos
[       OK ] SquareRootTest.NegativeNos (0 ms)
[----------] 2 tests from SquareRootTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 2 tests.
lenovo@lenovo-ThinkPad-T410:/media/lenovo/Newvolume/Esakki_folder/CPP/UnitTest/GTest-master$ 


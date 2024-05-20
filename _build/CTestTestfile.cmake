# CMake generated Testfile for 
# Source directory: /home/zarok/projects/tp_labs/tp_projects/rk2
# Build directory: /home/zarok/projects/tp_labs/tp_projects/rk2/_build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[check]=] "/home/zarok/projects/tp_labs/tp_projects/rk2/_build/check")
set_tests_properties([=[check]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/zarok/projects/tp_labs/tp_projects/rk2/CMakeLists.txt;24;add_test;/home/zarok/projects/tp_labs/tp_projects/rk2/CMakeLists.txt;0;")
subdirs("third-party/gtest")

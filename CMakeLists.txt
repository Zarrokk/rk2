cmake_minimum_required(VERSION 3.22)


option(BUILD_TESTS "Build tests" OFF)
option(PACK "pack" OFF)
project(program)
set(CPACK_GENERATOR "DEB")
file(GLOB SOURCES "ConceptualExample01.cpp" , "ConceptualExample02.cpp" , "Program.cpp", "Chess.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

if(PACK)
  install(TARGETS program
    RUNTIME DESTINATION bin
  )
  include(CPack.cmake)
endif()

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third-party/gtest)
  file(GLOB TEST_SOURCES "ConceptualExample01.cpp" , "ConceptualExample02.cpp" , "tests.cpp","Chess.cpp")
  add_executable(check ${TEST_SOURCES})
  target_link_libraries(check gtest_main)
  add_test(NAME check COMMAND check)
endif()

include (CPack.cmake)

add_library(Tests INTERFACE)
set(TESTS_DIR "${PROJECT_SOURCE_DIR}/Tests")
MESSAGE(STATUS "Test Directory:" ${TESTS_DIR})
target_include_directories(Tests INTERFACE ${TESTS_DIR})
#DataOpTest
file(GLOB_RECURSE  DataOpTestCpp ${TESTS_DIR}/DataOpTest/*.cpp)
file(GLOB_RECURSE  DataOpTestH ${TESTS_DIR}/DataOpTest/*.h)
add_library(DataOpTest ${DataOpTestCpp} ${DataOpTestH})
#LayerTest
file(GLOB_RECURSE  LayerTestCpp ${TESTS_DIR}/LayerTest/*.cpp)
file(GLOB_RECURSE  LayerTestH ${TESTS_DIR}/LayerTest/*.h)
add_library(LayerTest ${LayerTestCpp} ${LayerTestH})
#OtherTest
file(GLOB_RECURSE  OtherTestCpp ${TESTS_DIR}/OtherTests/*.cpp)
file(GLOB_RECURSE  OtherTestH ${TESTS_DIR}/OtherTests/*.h)
add_library(OtherTest ${OtherTestCpp} ${OtherTestH})

cmake_minimum_required(VERSION 3.5)

project(MetaNN LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

function(include_sub_directories_recursively rootDir)
    if (IS_DIRECTORY ${rootDir})
        message("include directory: " ${rootDir})
        include_directories(${rootDir})
    endif()

    file(GLOB SUB_DIRS RELATIVE ${rootDir} ${rootDir}/*)
    foreach(sub ${SUB_DIRS})
        if (IS_DIRECTORY ${rootDir}/${sub})
            include_sub_directories_recursively(${rootDir}/${sub})
        endif()
    endforeach()
endfunction()
#MetaNN
include_sub_directories_recursively(${CMAKE_SOURCE_DIR}/MetaNN)
MESSAGE(STATUS "CMAK_SOURCE_DIR" ${CMAKE_SOURCE_DIR})
#Test
include_directories("${PROJECT_SOURCE_DIR}/Tests")
add_subdirectory(Tests)
add_executable(MetaNN main.cpp)
target_link_libraries(MetaNN DataOpTest LayerTest OtherTest)

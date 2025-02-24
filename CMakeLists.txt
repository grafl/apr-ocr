cmake_minimum_required(VERSION 3.25)

project(apr-ocr C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

find_package(APR REQUIRED)

if (APR_FOUND)
    message(STATUS "    Using the APR library ...")
    add_executable(${PROJECT_NAME} src/main.c)
    target_include_directories(${PROJECT_NAME} INTERFACE ${APR_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${APR_LIBRARY})
endif (APR_FOUND)

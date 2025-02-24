cmake_minimum_required(VERSION 3.25)

project(apr-ocr C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

find_package(APR REQUIRED)

if (APR_FOUND)
    message(STATUS "    Using the APR library ...")
endif (APR_FOUND)

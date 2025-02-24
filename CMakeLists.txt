cmake_minimum_required(VERSION 3.25)

project(apr-ocr C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

find_package(APR REQUIRED)

if (APR_FOUND)
    # message(STATUS "    Using the APR library ...")

    add_library(lib${PROJECT_NAME} src/teszt.c)
    target_include_directories(lib${PROJECT_NAME} PRIVATE ${APR_INCLUDE_DIR} ${CMAKE_CURRENT_LIST_DIR}/include)
    target_link_libraries(lib${PROJECT_NAME} ${APR_LIBRARY})

    add_executable(${PROJECT_NAME} src/main.c)
    target_include_directories(${PROJECT_NAME} PRIVATE ${APR_INCLUDE_DIR} ${CMAKE_CURRENT_LIST_DIR}/include)
    target_link_libraries(${PROJECT_NAME} ${APR_LIBRARY})
    target_link_libraries(${PROJECT_NAME} lib${PROJECT_NAME})
endif (APR_FOUND)

cmake_minimum_required(VERSION 3.16)

project(cppStart CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    
)

set(HEADERS
    
)

add_executable(${PROJECT_NAME} ${SOURCES})

set_source_files_properties(${HEADERS} PROPERTIES HEADER_FILE_ONLY ON)

source_group(TREE "${CMAKE_SOURCE_DIR}/src" FILES ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE 
        /W4       
        /EHsc     
        /utf-8    
    )
endif()
cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(SpeurenMetKrul)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB_RECURSE SOURCES src/*.cpp src/*.hpp)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES} src/main.cpp src/CurlRequest.cpp src/CurlRequest.hpp src/Speur.cpp src/Speur.hpp src/instructions/BaseInstruction.cpp src/instructions/BaseInstruction.hpp src/factories/InstructionFactory.cpp src/factories/InstructionFactory.hpp src/instructions/ValuesAndTypes/TextInstruction.cpp src/instructions/ValuesAndTypes/TextInstruction.hpp src/Speur.hpp src/instructions/ValuesAndTypes/VariableAssignment.cpp src/instructions/ValuesAndTypes/VariableAssignment.hpp src/instructions/ValuesAndTypes/VariableReference.cpp src/instructions/ValuesAndTypes/VariableReference.hpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})

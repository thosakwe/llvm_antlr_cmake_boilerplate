cmake_minimum_required(VERSION 2.8)
project(my_project)
include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

set(ANTLR4_JAR ${PROJECT_SOURCE_DIR}/lib/antlr-4.7-complete.jar)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR}/bin)
set(GRAMMAR_NAME MyLanguage)
set(GRAMMAR_FILE ${PROJECT_SOURCE_DIR}/grammars/${GRAMMAR_NAME}.g4)

# Find Java
find_package(Java REQUIRED)

# Find LLVM
find_package (llvm 5.0.0 REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
llvm_map_components_to_libnames(llvm_libs support core irreader)


# Find ANTLR 4.7
ExternalProject_Add(antlr4cpp
    URL ${PROJECT_SOURCE_DIR}/lib/antlr4-4.7.zip
    CONFIGURE_COMMAND  ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE=Release -DANTLR4CPP_JAR_LOCATION=${ANTLR4_JAR} -DBUILD_SHARED_LIBS=ON -BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX:PATH=<INSTALL_DIR> -DCMAKE_SOURCE_DIR:PATH=<SOURCE_DIR>/runtime/Cpp <SOURCE_DIR>/runtime/Cpp
)
ExternalProject_Get_Property(antlr4cpp INSTALL_DIR)
set(ANTLR4_INCLUDE_DIRS "${INSTALL_DIR}/include")
set(ANTLR4_LIBS "${INSTALL_DIR}/src/antlr4cpp/runtime/Cpp")
message(STATUS "ANTLR4: ${ANTLR4_LIBS}")

# Build grammar file
execute_process(
    COMMAND
    "${Java_JAVA_EXECUTABLE}" -jar "${ANTLR4_JAR}" -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/src/grammars/${GRAMMAR_NAME}.cpp ${PROJECT_SOURCE_DIR}/grammars/${GRAMMAR_NAME}.g4
)

# Link dependencies
include_directories(${ANTLR4_INCLUDE_DIRS})
link_directories(${ANTLR4_LIBS})

add_executable(my_project
    src/main.cpp
)
target_link_libraries(my_project ${llvm_libs})
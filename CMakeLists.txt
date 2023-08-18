##################################################    Project     ##################################################
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)
project               (type_trait_concepts VERSION 1.0 LANGUAGES CXX)
set_property          (GLOBAL PROPERTY USE_FOLDERS ON)
set                   (CMAKE_CXX_STANDARD 26)

##################################################    Sources     ##################################################
file(GLOB_RECURSE PROJECT_HEADERS include/*.hpp)
file(GLOB_RECURSE PROJECT_MISC *.md *.txt)
set (PROJECT_FILES ${PROJECT_HEADERS} ${PROJECT_MISC})

##################################################    Targets     ##################################################
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  $<INSTALL_INTERFACE:include>)

# Hack for header-only project to appear in the IDEs.
add_library(${PROJECT_NAME}_ STATIC ${PROJECT_FILES})
target_include_directories(${PROJECT_NAME}_ PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/include 
  ${CMAKE_CURRENT_BINARY_DIR})
set_target_properties(${PROJECT_NAME}_ PROPERTIES LINKER_LANGUAGE CXX)

##################################################  Installation  ##################################################
install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}-config)
install(DIRECTORY include/ DESTINATION include)
install(EXPORT  ${PROJECT_NAME}-config NAMESPACE std::experimental:: DESTINATION cmake)
export (TARGETS ${PROJECT_NAME} FILE ${PROJECT_NAME}-config.cmake)

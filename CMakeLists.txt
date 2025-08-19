cmake_minimum_required(VERSION 3.31)
project(SparkleEngine VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Build configuration
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

#SFML dependency
include(FetchContent)
FetchContent_Declare(SFML
	GIT_REPOSITORY https://github.com/SFML/SFML.git
	GIT_TAG 3.0.0
)
FetchContent_MakeAvailable(SFML)

#Source files
set(ENGINE_SOURCES
    src/Engine.cpp
    src/utilities/Logger.cpp
)

#Engine as static library
add_library(SparkleEngineLib STATIC ${ENGINE_SOURCES} ${ENGINE_HEADERS})

#Include directories
target_include_directories(SparkleEngineLib
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/headers
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/src
)

#Linking SFML
target_link_libraries(SparkleEngineLib PUBLIC
	SFML::Graphics 
	SFML::Window 
	SFML::System 
	SFML::Audio 
	SFML::Network
)

add_executable(SparkleEngine src/main.cpp)
target_link_libraries(SparkleEngine PRIVATE SparkleEngineLib)
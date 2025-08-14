cmake_minimum_required(VERSION 3.31)
project(SparkleEngine)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)
FetchContent_Declare(SFML
	GIT_REPOSITORY https://github.com/SFML/SFML.git
	GIT_TAG 3.0.0)
FetchContent_MakeAvailable(SFML)

add_executable(SparkleEngine src/main.cpp)
target_link_libraries(SparkleEngine PRIVATE
	SFML::Graphics 
	SFML::Window 
	SFML::System 
	SFML::Audio 
	SFML::Network
)


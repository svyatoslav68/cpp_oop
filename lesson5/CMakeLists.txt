cmake_minimum_required(VERSION 3.10)

project(lesson5 VERSION 0.0.1)

set(TARGET_PAIRS pairs)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${TARGET_PAIRS} ${SOURCE_DIR}/main.cpp ${SOURCE_DIR}/pairs.cpp)

target_include_directories(${TARGET_PAIRS} PRIVATE ${HEADER_DIR})


set_target_properties(
	${TARGET_PAIRS} PROPERTIES
	#${TARGET_CARDS} PROPERTIES
	CXX_STANDARD 17	#Собирать в соответствии со стандартом c17
	C_STANDARD	11
	)

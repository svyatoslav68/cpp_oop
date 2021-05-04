cmake_minimum_required(VERSION 3.10)
project(lesson8)

set(TARGET exception)
set(TARGET_ROBOT robot)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${TARGET} ${SOURCE_DIR}/main.cpp ${SOURCE_DIR}/classes.cpp)
add_executable(${TARGET_ROBOT} ${SOURCE_DIR}/main_robot.cpp ${SOURCE_DIR}/robot.cpp)

target_include_directories(${TARGET} PRIVATE ${HEADER_DIR})
target_include_directories(${TARGET_ROBOT} PRIVATE ${HEADER_DIR})

set_target_properties(
	${TARGET} PROPERTIES
	${TARGET_ROBOT} PROPERTIES
	CXX_STANDARD 17
)



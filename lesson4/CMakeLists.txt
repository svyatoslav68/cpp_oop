cmake_minimum_required(VERSION 3.10)

project(lesson4 VERSION 0.0.1)

set(TARGET_CARDS cards)
set(TARGET_ARRAY array)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${TARGET_CARDS} ${SOURCE_DIR}/cards.cpp ${SOURCE_DIR}/hand.cpp ${SOURCE_DIR}/blackjack.cpp)
add_executable(${TARGET_ARRAY} ${SOURCE_DIR}/main_array.cpp ${SOURCE_DIR}/randomint.cpp ${SOURCE_DIR}/arrayint.cpp)

target_include_directories(${TARGET_CARDS} PRIVATE ${HEADER_DIR})
target_include_directories(${TARGET_ARRAY} PRIVATE ${HEADER_DIR})

set_target_properties(
	${TARGET_ARRAY} PROPERTIES
	${TARGET_CARDS} PROPERTIES
	CXX_STANDARD 17	#Собирать в соответствии со стандартом c17
	C_STANDARD	11
	)

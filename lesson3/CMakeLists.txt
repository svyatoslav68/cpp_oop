cmake_minimum_required(VERSION 3.10)

project(lesson3 VERSION 0.0.1)

set(TARGET_FIGURES figures)
set(TARGET_CARS cars)
set(TARGET_FRACTION fraction)
set(TARGET_CARDS cards)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${TARGET_FIGURES} ${SOURCE_DIR}/figures.cpp ${SOURCE_DIR}/main.cpp)
add_executable(${TARGET_CARS} ${SOURCE_DIR}/cars.cpp ${SOURCE_DIR}/main_car.cpp)
add_executable(${TARGET_FRACTION} ${SOURCE_DIR}/fraction.cpp ${SOURCE_DIR}/main_fraction.cpp)
add_executable(${TARGET_CARDS} ${SOURCE_DIR}/cards.cpp ${SOURCE_DIR}/main_cards.cpp)

target_include_directories(${TARGET_FIGURES} PRIVATE ${HEADER_DIR})
target_include_directories(${TARGET_CARS} PRIVATE ${HEADER_DIR})
target_include_directories(${TARGET_FRACTION} PRIVATE ${HEADER_DIR})
target_include_directories(${TARGET_CARDS} PRIVATE ${HEADER_DIR})

set_target_properties(
	${TARGET_FIGURES} PROPERTIES
	CXX_STANDARD 17	#Собирать в соответствии со стандартом c17
	C_STANDARD	11
	)

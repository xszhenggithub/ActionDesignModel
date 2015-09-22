cmake_minimum_required(VERSION 3.3)
project(ActionDesignModel)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(TEMPLATE_SOURCE_FILES template/main.cpp)
add_executable(template ${TEMPLATE_SOURCE_FILES})

set(STRATEGY_SOURCE_FILES strategy/main.cpp)
add_executable(strategy ${STRATEGY_SOURCE_FILES})

set(VIS_SOURCE_FILES visitor/main.cpp)
add_executable(visitor ${VIS_SOURCE_FILES})

set(STA_SOURCE_FILES state/main.cpp)
add_executable(state ${STA_SOURCE_FILES})

set(RSP_SOURCE_FILES responsibility/main.cpp)
add_executable(responsibility ${RSP_SOURCE_FILES})

set(OBS_SOURCE_FILES observer/main.cpp)
add_executable(observer ${OBS_SOURCE_FILES})

set(MMT_SOURCE_FILES memento/main.cpp)
add_executable(memento ${MMT_SOURCE_FILES})

set(MDT_SOURCE_FILES mediator/main.cpp)
add_executable(mediator ${MDT_SOURCE_FILES})

set(ITR_SOURCE_FILES iterator/main.cpp)
add_executable(iterator ${ITR_SOURCE_FILES})

set(ITP_SOURCE_FILES interpreter/main.cpp)
add_executable(interpreter ${ITP_SOURCE_FILES})

set(CMD_SOURCE_FILES command/main.cpp)
add_executable(command ${CMD_SOURCE_FILES})
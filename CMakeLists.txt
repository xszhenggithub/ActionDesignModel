cmake_minimum_required(VERSION 3.3)
project(ActionDesignModel)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(TEMPLATE_SOURCE_FILES template/main.cpp template/Template.cpp template/Template.h)
add_executable(template ${TEMPLATE_SOURCE_FILES})

set(STRATEGY_SOURCE_FILES strategy/main.cpp strategy/Strategy.cpp strategy/Strategy.h strategy/Context.cpp strategy/Context.h)
add_executable(strategy ${STRATEGY_SOURCE_FILES})

set(VIS_SOURCE_FILES visitor/main.cpp visitor/Visitor.cpp visitor/Visitor.h visitor/Element.cpp visitor/Element.h)
add_executable(visitor ${VIS_SOURCE_FILES})

set(STA_SOURCE_FILES state/main.cpp state/State.cpp state/State.h state/Context.cpp state/Context.h)
add_executable(state ${STA_SOURCE_FILES})

set(RSP_SOURCE_FILES responsibility/main.cpp responsibility/Handle.cpp responsibility/Handle.h)
add_executable(responsibility ${RSP_SOURCE_FILES})

set(OBS_SOURCE_FILES observer/main.cpp observer/Subject.cpp observer/Subject.h observer/Observer.cpp observer/Observer.h)
add_executable(observer ${OBS_SOURCE_FILES})

set(MMT_SOURCE_FILES memento/main.cpp memento/Memento.cpp memento/Memento.h)
add_executable(memento ${MMT_SOURCE_FILES})

set(MDT_SOURCE_FILES mediator/main.cpp mediator/Colleage.cpp mediator/Colleage.h mediator/Mediator.cpp mediator/Mediator.h)
add_executable(mediator ${MDT_SOURCE_FILES})

set(ITR_SOURCE_FILES iterator/main.cpp iterator/Aggregate.cpp iterator/Aggregate.h iterator/Iterator.cpp iterator/Iterator.h)
add_executable(iterator ${ITR_SOURCE_FILES})

set(ITP_SOURCE_FILES interpreter/main.cpp interpreter/Context.cpp interpreter/Context.h interpreter/Interpreter.cpp interpreter/Interpreter.h)
add_executable(interpreter ${ITP_SOURCE_FILES})

set(CMD_SOURCE_FILES command/main.cpp command/Receiver.cpp command/Receiver.h command/Command.cpp command/Command.h command/Invoker.cpp command/Invoker.h)
add_executable(command ${CMD_SOURCE_FILES})
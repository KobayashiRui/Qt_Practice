cmake_minimum_required(VERSION 3.16)

project(MultiWindowTest1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appMultiWindowTest1
    main.cpp
)

qt_add_qml_module(appMultiWindowTest1
    URI MultiWindowTest1
    VERSION 1.0
    QML_FILES main.qml SubWindow.qml
)

target_compile_definitions(appMultiWindowTest1
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(appMultiWindowTest1
    PRIVATE Qt6::Quick)

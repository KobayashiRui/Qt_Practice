cmake_minimum_required(VERSION 3.16)

project(QuickMediaPlayer2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appQuickMediaPlayer2
    main.cpp
)

qt_add_qml_module(appQuickMediaPlayer2
    URI QuickMediaPlayer2
    VERSION 1.0
    QML_FILES main.qml 
)

target_compile_definitions(appQuickMediaPlayer2
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(appQuickMediaPlayer2
    PRIVATE Qt6::Quick)

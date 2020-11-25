project(Qt3DPointcloudRenderer)
cmake_minimum_required(VERSION 3.0.2)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(Qt5_DIR /usr/local/Cellar/qt/5.15.1/)
list(APPEND CMAKE_PREFIX_PATH ${Qt5_DIR})

find_package(Qt5Core REQUIRED)
find_package(Qt5Qml REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)
find_package(Qt53DInput REQUIRED)
find_package(Qt53DQuick REQUIRED)
find_package(Qt53DRender REQUIRED)
find_package(Qt53DQuickRender REQUIRED)

set(WITH_PCL ON  CACHE BOOL "Enable pcl")
if(WITH_PCL)
    find_package(PCL REQUIRED COMPONENTS common io)
    link_directories(${PCL_LIBRARY_DIRS})
endif(WITH_PCL)

set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/src/qpointcloud.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/qpointcloudgeometry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/qpointfield.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/qpointcloudreader.cpp
  )
set(HEADER
    ${CMAKE_CURRENT_SOURCE_DIR}/include/qpointcloud.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/qpointcloudgeometry.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/qpointfield.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/qpointcloudreader.h
  )

add_library(Qt3DPointcloudRenderer ${SOURCE} ${HEADER})
target_include_directories(Qt3DPointcloudRenderer PUBLIC  ${PROJECT_SOURCE_DIR}/include/
                                                  PRIVATE ${PROJECT_SOURCE_DIR}/src/ )

if(WITH_PCL)
  target_link_libraries(Qt3DPointcloudRenderer ${PCL_LIBRARIES} stdc++)
  target_include_directories(${PROJECT_NAME} PRIVATE PRIVATE ${PCL_INCLUDE_DIRS})
  #target_compile_definitions(${PROJECT_NAME} PRIVATE ${PCL_DEFINITIONS}) causes command-line error in cmake from ubuntu 16.04
  target_compile_definitions(${PROJECT_NAME} PUBLIC WITH_PCL=1)
endif(WITH_PCL)

QT5_ADD_RESOURCES(RESOURCES_RCC main.qrc)

add_executable(lesson1 main.cpp main.qml ${RESOURCES_RCC})
target_link_libraries(lesson1 Qt3DPointcloudRenderer)

qt5_use_modules(Qt3DPointcloudRenderer Qml Widgets Quick 3DCore 3DQuick 3DRender 3DQuickRender)
qt5_use_modules(lesson1 Gui Widgets Qml Quick 3DCore 3DInput 3DLogic 3DQuick 3DRender 3DQuickInput 3DQuickRender)
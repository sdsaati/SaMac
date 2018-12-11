cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

project(SaMac LANGUAGES CXX)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DQT_USE_QSTRINGBUILDER")


find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)
find_package(Qt5Svg REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(QT5SVG Qt5Svg)
link_directories(${QT5SVG_LIBRARY_DIRS})

include_directories(${QT_INCLUDES})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Gui_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})


get_target_property(QtCore_location Qt5::Core LOCATION)


add_subdirectory(Libs)
add_subdirectory(Sources)






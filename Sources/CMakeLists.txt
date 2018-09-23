# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

get_target_property(QtCore_location Qt5::Core LOCATION)

set(project_ui
	mainwindow.ui)

set(project_headers 
	mainwindow.h)

set(project_sources
	main.cpp
	mainwindow.cpp)

qt5_wrap_ui(project_headers_wrapped ${project_ui})
qt5_wrap_cpp(projcet_sources_moc ${project_sources})

add_executable(MainExecutable
	${project_headers} 
	${project_sources} 
	${project_sources_moc}
	${project_headers_wrapped})

target_link_libraries(MainExecutable PUBLIC
	PUBLIC
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
	SASELib)


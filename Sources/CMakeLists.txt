

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
        Qt5::Svg ${QT5SVG_LIBRARIES}
        SASELib)


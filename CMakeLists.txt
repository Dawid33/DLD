cmake_minimum_required(VERSION 3.20)
project(DLD)
set(CMAKE_CXX_STANDARD 20)

#-----Library-----
add_library(DLD
    library.cpp
    output.cpp)
target_include_directories(DLD PRIVATE include/private)
target_include_directories(DLD PUBLIC include/public)

#-----GUI-----
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
find_package(Qt5 COMPONENTS
    Core
    Gui
    Widgets
    REQUIRED)
add_executable(qt-gui
    qt-gui/Main.cpp
    qt-gui/MainWindow.cpp
    qt-gui/Footer.cpp
    qt-gui/CentralWidget.cpp)
target_link_libraries(qt-gui
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets)
target_link_libraries(qt-gui DLD)
target_include_directories(qt-gui PUBLIC include/public)
target_include_directories(qt-gui PUBLIC qt-gui/include)





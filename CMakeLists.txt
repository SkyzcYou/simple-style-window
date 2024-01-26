cmake_minimum_required(VERSION 3.27)
project(style_window)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(style_window src/main.cpp
        src/StyleWindow.cpp
        src/StyleWindow.h
        src/MyButton.h
        src/MyButton.cpp
)
target_link_libraries(style_window
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)


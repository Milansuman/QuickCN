cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME "quickcn" CACHE STRING "Name of the project")
set(EXECUTABLE_NAME "example" CACHE STRING "Name of the executable")

project(${PROJECT_NAME} VERSION 0.1 LANGUAGES CXX)
find_package(Qt6 REQUIRED COMPONENTS Quick Core)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
qt_standard_project_setup(REQUIRES 6.8)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/components)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib)

qt_add_executable(${EXECUTABLE_NAME}
  src/main.cpp
)

qt_add_qml_module(${EXECUTABLE_NAME}
  URI ${PROJECT_NAME}
  QML_FILES
    src/Demo.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(${EXECUTABLE_NAME} PROPERTIES
# MACOSX_BUNDLE_GUI_IDENTIFIER com.example.${EXECUTABLE_NAME}
  MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
  MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
  MACOSX_BUNDLE TRUE
  WIN32_EXECUTABLE TRUE
)

target_link_libraries(${EXECUTABLE_NAME}
  PRIVATE Qt6::Core
  PRIVATE Qt6::Quick
  PRIVATE ${PROJECT_NAME}lib
  PRIVATE ${QUICKCN_COMPONENT_TARGETS}
)

include(GNUInstallDirs)
install(TARGETS ${EXECUTABLE_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

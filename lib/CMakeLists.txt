
qt_add_library(${PROJECT_NAME}lib STATIC)

qt_add_qml_module(${PROJECT_NAME}lib
  URI quickcn.lib
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/lib
  SOURCES
    util.h
    util.cpp
    theme.h
    theme.cpp
    dark-theme.h
    dark-theme.cpp
    color.h
    config.h
    config.cpp
)

target_link_libraries(${PROJECT_NAME}lib PRIVATE Qt6::Core Qt6::Quick)

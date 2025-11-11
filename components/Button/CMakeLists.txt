
qt_add_library(${PROJECT_NAME}components STATIC)

qt_add_qml_module(${PROJECT_NAME}components
  URI quickcn.components
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/components
  QML_FILES
    CNButton.qml
)

target_link_libraries(${PROJECT_NAME}components
  PRIVATE Qt6::Core
  PRIVATE Qt6::Quick
)

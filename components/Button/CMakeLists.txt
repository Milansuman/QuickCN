qt_add_library(${PROJECT_NAME}_component_Button STATIC)

qt_add_qml_module(${PROJECT_NAME}_component_Button
  URI quickcn.components.Button
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/components/Button
  QML_FILES
    CNButton.qml
)

target_link_libraries(${PROJECT_NAME}_component_Button
  PRIVATE Qt6::Core
  PRIVATE Qt6::Quick
)
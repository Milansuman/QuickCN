import QtQuick
import quickcn.lib
import quickcn.components

Window{
  width: 800
  height: 600
  visible: true
  color: Theme.background

  CNButton{
    text: "Hello World"
    anchors.centerIn: parent
  }
}

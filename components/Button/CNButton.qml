import QtQuick
import QtQuick.Controls
import quickcn.lib

Button{
  id: quickcnButton

  property string variant: "default"
  property string size: "default"

  background: Rectangle{
    radius: Theme.radius
    height: 40
    color: Theme.primary
  }

  contentItem: Text{
    anchors.centerIn: parent
    text: parent.text

    color: Theme.primaryForeground
    horizontalAlignment: Text.AlignHCenter
    verticalAlignment: Text.AlignVCenter
  }
}

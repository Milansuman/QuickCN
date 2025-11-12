import QtQuick
import QtQuick.Controls
import quickcn.lib

Button{
  id: quickcnButton
  hoverEnabled: true

  property string variant: "default"
  property string size: "default"

  property Theme theme: Config.currentTheme

  implicitHeight: {
    switch(quickcnButton.size){
      case "default":
      case "icon":
        return Config.getTailwindSize(9);
      case "sm":
      case "icon-sm":
        return Config.getTailwindSize(8);
      case "lg":
      case "icon-lg":
        return Config.getTailwindSize(10);
      default:
        return Config.getTailwindSize(9);
    }
  }

  implicitWidth: {
    switch(quickcnButton.size){
      case "icon":
        return Config.getTailwindSize(9);
      case "icon-sm":
        return Config.getTailwindSize(8);
      case "icon-lg":
        return Config.getTailwindSize(10);
      default:
        return contentItem.implicitWidth + 2 * horizontalPadding;
    }
  }

  horizontalPadding: {
    switch(quickcnButton.size){
      case "default":
        return Config.getTailwindSize(4);
      case "sm":
        return Config.getTailwindSize(3);
      case "lg":
        return Config.getTailwindSize(6);
      default:
        return Config.getTailwindSize(4);
    }
  }

  background: Rectangle{
    radius: theme.radius
    opacity: quickcnButton.hovered ? 0.9 : 1

    color: {
      switch(quickcnButton.variant){
        case "default":
          return theme.primary;
        case "destructive":
          return theme.destructive;
        case "outline":
          return theme.background;
        case "secondary":
          return theme.secondary;
        case "ghost":
          return quickcnButton.hovered ? theme.accent : "transparent";
        case "link":
          return "transparent";
      }
    }

    border.width: {
      switch(quickcnButton.variant){
        case "outline":
          return 1;
        default:
          return 0;
      }
    }

    border.color: theme.border
  }

  contentItem: Text{
    text: parent.text
    font.underline: parent.variant === "link" && parent.hovered

    color: {
      switch(quickcnButton.variant){
        case "default":
          return theme.primaryForeground;
        case "destructive":
          return "white";
        case "outline":
        case "ghost":
        case "link":
          return theme.primary;
        case "secondary":
          return theme.secondaryForeground;
      }
    }
    horizontalAlignment: Text.AlignHCenter
    verticalAlignment: Text.AlignVCenter
  }
}

import QtQuick
import QtQuick.Layouts
import quickcn.lib
import quickcn.components

Window{
  width: 800
  height: 600
  visible: true
  color: Config.currentTheme.background

  FlexboxLayout{
    anchors.fill: parent
    anchors.margins: 10
    direction: FlexboxLayout.Row
    wrap: FlexboxLayout.Wrap
    gap: 10

    CNButton{
      text: "+"
      variant: "default"
      size: "icon-sm"
    }

    CNButton{
      text: "+"
      variant: "default"
      size: "icon"
    }

    CNButton{
      text: "+"
      variant: "default"
      size: "icon-lg"
    }

    CNButton{
      text: "Hello World"
      variant: "default"
      size: "sm"
    }

    CNButton{
      text: "Hello World"
      variant: "default"
    }

    CNButton{
      text: "Hello World"
      variant: "default"
      size: "lg"
    }

    CNButton{
      text: "Hello World"
      variant: "secondary"
    }

    CNButton{
      text: "Hello World"
      variant: "destructive"
    }

    CNButton{
      text: "Hello World"
      variant: "outline"
    }

    CNButton{
      text: "Hello World"
      variant: "ghost"
    }

    CNButton{
      text: "Hello World"
      variant: "link"
    }

    CNButton{
      text: "Switch Theme"
      property bool isDark: false

      Theme{
        id: lightTheme
      }

      DarkTheme{
        id: darkTheme
      }

      onPressed: {
        if(isDark){
          Config.currentTheme = lightTheme
          isDark = false
        }else{
          Config.currentTheme = darkTheme
          isDark = true
        }
      }
    }
  }
}

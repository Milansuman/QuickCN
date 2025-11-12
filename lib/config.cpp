#include "config.h"
#include "theme.h"
#include "dark-theme.h"
#include <QJsonObject>
#include <QBindable>

Config::Config(QObject *parent):
  QObject(parent),
  m_theme(new Theme(this))
{}

Theme* Config::getCurrentTheme(){
  return m_theme;
}

void Config::setCurrentTheme(Theme* theme){
  if(m_theme == theme)
     return;

   m_theme = theme;
   if(m_theme) {
     m_theme->setParent(this);
   }
   emit currentThemeChanged();
}

float Config::getTailwindSize(int number) const{
  return m_theme->m_spacing * number;
}

#pragma once

#include <QObject>
#include <QtQml>
#include <QJsonObject>
#include <QProperty>
#include <qtmetamacros.h>
#include "theme.h"

class Config: public QObject{
  Q_OBJECT
  QML_SINGLETON
  QML_ELEMENT
  Q_PROPERTY(Theme* currentTheme READ getCurrentTheme WRITE setCurrentTheme NOTIFY currentThemeChanged)
public:
  explicit Config(QObject *parent = nullptr);
  Theme* getCurrentTheme();
  void setCurrentTheme(Theme *theme);
  Q_INVOKABLE float getTailwindSize(int number) const;
private:
  Theme *m_theme;
signals:
  void currentThemeChanged();
};

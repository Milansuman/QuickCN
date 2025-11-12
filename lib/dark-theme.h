#pragma once

#include <QObject>
#include "theme.h"

class DarkTheme: public Theme{
  Q_OBJECT
  QML_ELEMENT
public:
  explicit DarkTheme(QObject *parent = nullptr);
};

#pragma once

#include <QObject>
#include <QtQml>
#include <QColor>

class Util: public QObject{
  Q_OBJECT
  QML_SINGLETON
  QML_ELEMENT
public:
  explicit Util(QObject *parent = nullptr);
  Q_INVOKABLE QColor OkLCH(float L, float C, float H) const;
};

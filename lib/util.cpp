#include "util.h"
#include "color.h"
#include <QColor>

Util::Util(QObject *parent): QObject(parent){}

QColor Util::OkLCH(float L, float C, float H) const{
  colorm::Oklch lch(L, C, H);
  return QColor(QString::fromStdString(lch.hex()));
}

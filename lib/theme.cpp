#include "theme.h"
#include "util.h"

Theme::Theme(QObject *parent) : QObject(parent),
  m_radius(10.0f),
  m_spacing(4.0f),
  m_background(Util().OkLCH(1, 0, 0)),
  m_foreground(Util().OkLCH(0.145, 0, 0)),
  m_card(Util().OkLCH(1, 0, 0)),
  m_cardForeground(Util().OkLCH(0.145, 0, 0)),
  m_popover(Util().OkLCH(1, 0, 0)),
  m_popoverForeground(Util().OkLCH(0.145, 0, 0)),
  m_primary(Util().OkLCH(0.205, 0, 0)),
  m_primaryForeground(Util().OkLCH(0.985, 0, 0)),
  m_secondary(Util().OkLCH(0.97, 0, 0)),
  m_secondaryForeground(Util().OkLCH(0.205, 0, 0)),
  m_muted(Util().OkLCH(0.97, 0, 0)),
  m_mutedForeground(Util().OkLCH(0.556, 0, 0)),
  m_accent(Util().OkLCH(0.97, 0, 0)),
  m_accentForeground(Util().OkLCH(0.205, 0, 0)),
  m_destructive(Util().OkLCH(0.577, 0.245, 27.325)),
  m_border(Util().OkLCH(0.922, 0, 0)),
  m_input(Util().OkLCH(0.922, 0, 0)),
  m_ring(Util().OkLCH(0.708, 0, 0)),
  m_chart1(Util().OkLCH(0.646, 0.222, 41.116)),
  m_chart2(Util().OkLCH(0.6, 0.118, 184.704)),
  m_chart3(Util().OkLCH(0.398, 0.07, 227.392)),
  m_chart4(Util().OkLCH(0.828, 0.189, 84.429)),
  m_chart5(Util().OkLCH(0.769, 0.188, 70.08)),
  m_sidebar(Util().OkLCH(0.985, 0, 0)),
  m_sidebarForeground(Util().OkLCH(0.145, 0, 0)),
  m_sidebarPrimary(Util().OkLCH(0.205, 0, 0)),
  m_sidebarPrimaryForeground(Util().OkLCH(0.985, 0, 0)),
  m_sidebarAccent(Util().OkLCH(0.97, 0, 0)),
  m_sidebarAccentForeground(Util().OkLCH(0.205, 0, 0)),
  m_sidebarBorder(Util().OkLCH(0.922, 0, 0)),
  m_sidebarRing(Util().OkLCH(0.708, 0, 0))
{
}

float Theme::radius() const {
  return m_radius;
}

float Theme::spacing() const{
  return m_spacing;
}

QColor Theme::background() const {
  return m_background;
}

QColor Theme::foreground() const {
  return m_foreground;
}

QColor Theme::card() const {
  return m_card;
}

QColor Theme::cardForeground() const {
  return m_cardForeground;
}

QColor Theme::popover() const {
  return m_popover;
}

QColor Theme::popoverForeground() const {
  return m_popoverForeground;
}

QColor Theme::primary() const {
  return m_primary;
}

QColor Theme::primaryForeground() const {
  return m_primaryForeground;
}

QColor Theme::secondary() const {
  return m_secondary;
}

QColor Theme::secondaryForeground() const {
  return m_secondaryForeground;
}

QColor Theme::muted() const {
  return m_muted;
}

QColor Theme::mutedForeground() const {
  return m_mutedForeground;
}

QColor Theme::accent() const {
  return m_accent;
}

QColor Theme::accentForeground() const {
  return m_accentForeground;
}

QColor Theme::destructive() const {
  return m_destructive;
}

QColor Theme::border() const {
  return m_border;
}

QColor Theme::input() const {
  return m_input;
}

QColor Theme::ring() const {
  return m_ring;
}

QColor Theme::chart1() const {
  return m_chart1;
}

QColor Theme::chart2() const {
  return m_chart2;
}

QColor Theme::chart3() const {
  return m_chart3;
}

QColor Theme::chart4() const {
  return m_chart4;
}

QColor Theme::chart5() const {
  return m_chart5;
}

QColor Theme::sidebar() const {
  return m_sidebar;
}

QColor Theme::sidebarForeground() const {
  return m_sidebarForeground;
}

QColor Theme::sidebarPrimary() const {
  return m_sidebarPrimary;
}

QColor Theme::sidebarPrimaryForeground() const {
  return m_sidebarPrimaryForeground;
}

QColor Theme::sidebarAccent() const {
  return m_sidebarAccent;
}

QColor Theme::sidebarAccentForeground() const {
  return m_sidebarAccentForeground;
}

QColor Theme::sidebarBorder() const {
  return m_sidebarBorder;
}

QColor Theme::sidebarRing() const {
  return m_sidebarRing;
}

QJsonObject Theme::toJSON() const {
  QJsonObject json;

  json["radius"] = m_radius;
  json["spacing"] = m_spacing;
  json["background"] = m_background.name();
  json["foreground"] = m_foreground.name();
  json["card"] = m_card.name();
  json["cardForeground"] = m_cardForeground.name();
  json["popover"] = m_popover.name();
  json["popoverForeground"] = m_popoverForeground.name();
  json["primary"] = m_primary.name();
  json["primaryForeground"] = m_primaryForeground.name();
  json["secondary"] = m_secondary.name();
  json["secondaryForeground"] = m_secondaryForeground.name();
  json["muted"] = m_muted.name();
  json["mutedForeground"] = m_mutedForeground.name();
  json["accent"] = m_accent.name();
  json["accentForeground"] = m_accentForeground.name();
  json["destructive"] = m_destructive.name();
  json["border"] = m_border.name();
  json["input"] = m_input.name();
  json["ring"] = m_ring.name();
  json["chart1"] = m_chart1.name();
  json["chart2"] = m_chart2.name();
  json["chart3"] = m_chart3.name();
  json["chart4"] = m_chart4.name();
  json["chart5"] = m_chart5.name();
  json["sidebar"] = m_sidebar.name();
  json["sidebarForeground"] = m_sidebarForeground.name();
  json["sidebarPrimary"] = m_sidebarPrimary.name();
  json["sidebarPrimaryForeground"] = m_sidebarPrimaryForeground.name();
  json["sidebarAccent"] = m_sidebarAccent.name();
  json["sidebarAccentForeground"] = m_sidebarAccentForeground.name();
  json["sidebarBorder"] = m_sidebarBorder.name();
  json["sidebarRing"] = m_sidebarRing.name();

  return json;
}

void Theme::fromJSON(const QJsonObject &json) {
  if (json.contains("radius") && json["radius"].isDouble()) {
    m_radius = json["radius"].toDouble();
  }
  if (json.contains("spacing") && json["spacing"].isDouble()) {
    m_spacing = json["spacing"].toDouble();
  }
  if (json.contains("background") && json["background"].isString()) {
    m_background = QColor(json["background"].toString());
  }
  if (json.contains("foreground") && json["foreground"].isString()) {
    m_foreground = QColor(json["foreground"].toString());
  }
  if (json.contains("card") && json["card"].isString()) {
    m_card = QColor(json["card"].toString());
  }
  if (json.contains("cardForeground") && json["cardForeground"].isString()) {
    m_cardForeground = QColor(json["cardForeground"].toString());
  }
  if (json.contains("popover") && json["popover"].isString()) {
    m_popover = QColor(json["popover"].toString());
  }
  if (json.contains("popoverForeground") && json["popoverForeground"].isString()) {
    m_popoverForeground = QColor(json["popoverForeground"].toString());
  }
  if (json.contains("primary") && json["primary"].isString()) {
    m_primary = QColor(json["primary"].toString());
  }
  if (json.contains("primaryForeground") && json["primaryForeground"].isString()) {
    m_primaryForeground = QColor(json["primaryForeground"].toString());
  }
  if (json.contains("secondary") && json["secondary"].isString()) {
    m_secondary = QColor(json["secondary"].toString());
  }
  if (json.contains("secondaryForeground") && json["secondaryForeground"].isString()) {
    m_secondaryForeground = QColor(json["secondaryForeground"].toString());
  }
  if (json.contains("muted") && json["muted"].isString()) {
    m_muted = QColor(json["muted"].toString());
  }
  if (json.contains("mutedForeground") && json["mutedForeground"].isString()) {
    m_mutedForeground = QColor(json["mutedForeground"].toString());
  }
  if (json.contains("accent") && json["accent"].isString()) {
    m_accent = QColor(json["accent"].toString());
  }
  if (json.contains("accentForeground") && json["accentForeground"].isString()) {
    m_accentForeground = QColor(json["accentForeground"].toString());
  }
  if (json.contains("destructive") && json["destructive"].isString()) {
    m_destructive = QColor(json["destructive"].toString());
  }
  if (json.contains("border") && json["border"].isString()) {
    m_border = QColor(json["border"].toString());
  }
  if (json.contains("input") && json["input"].isString()) {
    m_input = QColor(json["input"].toString());
  }
  if (json.contains("ring") && json["ring"].isString()) {
    m_ring = QColor(json["ring"].toString());
  }
  if (json.contains("chart1") && json["chart1"].isString()) {
    m_chart1 = QColor(json["chart1"].toString());
  }
  if (json.contains("chart2") && json["chart2"].isString()) {
    m_chart2 = QColor(json["chart2"].toString());
  }
  if (json.contains("chart3") && json["chart3"].isString()) {
    m_chart3 = QColor(json["chart3"].toString());
  }
  if (json.contains("chart4") && json["chart4"].isString()) {
    m_chart4 = QColor(json["chart4"].toString());
  }
  if (json.contains("chart5") && json["chart5"].isString()) {
    m_chart5 = QColor(json["chart5"].toString());
  }
  if (json.contains("sidebar") && json["sidebar"].isString()) {
    m_sidebar = QColor(json["sidebar"].toString());
  }
  if (json.contains("sidebarForeground") && json["sidebarForeground"].isString()) {
    m_sidebarForeground = QColor(json["sidebarForeground"].toString());
  }
  if (json.contains("sidebarPrimary") && json["sidebarPrimary"].isString()) {
    m_sidebarPrimary = QColor(json["sidebarPrimary"].toString());
  }
  if (json.contains("sidebarPrimaryForeground") && json["sidebarPrimaryForeground"].isString()) {
    m_sidebarPrimaryForeground = QColor(json["sidebarPrimaryForeground"].toString());
  }
  if (json.contains("sidebarAccent") && json["sidebarAccent"].isString()) {
    m_sidebarAccent = QColor(json["sidebarAccent"].toString());
  }
  if (json.contains("sidebarAccentForeground") && json["sidebarAccentForeground"].isString()) {
    m_sidebarAccentForeground = QColor(json["sidebarAccentForeground"].toString());
  }
  if (json.contains("sidebarBorder") && json["sidebarBorder"].isString()) {
    m_sidebarBorder = QColor(json["sidebarBorder"].toString());
  }
  if (json.contains("sidebarRing") && json["sidebarRing"].isString()) {
    m_sidebarRing = QColor(json["sidebarRing"].toString());
  }
}

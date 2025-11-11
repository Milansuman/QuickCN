#include "theme.h"
#include "util.h"

Theme::Theme(QObject *parent) : QObject(parent),
  m_radius(10.0f),
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

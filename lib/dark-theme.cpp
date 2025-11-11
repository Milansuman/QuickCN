#include "dark-theme.h"
#include "util.h"

DarkTheme::DarkTheme(QObject *parent) : Theme(parent) {
  m_radius = 10.0f;
  m_background = Util().OkLCH(0.145, 0, 0);
  m_foreground = Util().OkLCH(0.985, 0, 0);
  m_card = Util().OkLCH(0.205, 0, 0);
  m_cardForeground = Util().OkLCH(0.985, 0, 0);
  m_popover = Util().OkLCH(0.205, 0, 0);
  m_popoverForeground = Util().OkLCH(0.985, 0, 0);
  m_primary = Util().OkLCH(0.922, 0, 0);
  m_primaryForeground = Util().OkLCH(0.205, 0, 0);
  m_secondary = Util().OkLCH(0.269, 0, 0);
  m_secondaryForeground = Util().OkLCH(0.985, 0, 0);
  m_muted = Util().OkLCH(0.269, 0, 0);
  m_mutedForeground = Util().OkLCH(0.708, 0, 0);
  m_accent = Util().OkLCH(0.269, 0, 0);
  m_accentForeground = Util().OkLCH(0.985, 0, 0);
  m_destructive = Util().OkLCH(0.704, 0.191, 22.216);
  m_border = QColor::fromRgbF(1, 1, 1, 0.1);
  m_input = QColor::fromRgbF(1, 1, 1, 0.15);
  m_ring = Util().OkLCH(0.556, 0, 0);
  m_chart1 = Util().OkLCH(0.488, 0.243, 264.376);
  m_chart2 = Util().OkLCH(0.696, 0.17, 162.48);
  m_chart3 = Util().OkLCH(0.769, 0.188, 70.08);
  m_chart4 = Util().OkLCH(0.627, 0.265, 303.9);
  m_chart5 = Util().OkLCH(0.645, 0.246, 16.439);
  m_sidebar = Util().OkLCH(0.205, 0, 0);
  m_sidebarForeground = Util().OkLCH(0.985, 0, 0);
  m_sidebarPrimary = Util().OkLCH(0.488, 0.243, 264.376);
  m_sidebarPrimaryForeground = Util().OkLCH(0.985, 0, 0);
  m_sidebarAccent = Util().OkLCH(0.269, 0, 0);
  m_sidebarAccentForeground = Util().OkLCH(0.985, 0, 0);
  m_sidebarBorder = QColor::fromRgbF(1, 1, 1, 0.1);
  m_sidebarRing = Util().OkLCH(0.556, 0, 0);
}
#pragma once

#include <QObject>
#include <QtQml>
#include <QColor>

class Theme: public QObject{
  Q_OBJECT
  QML_SINGLETON
  QML_ELEMENT

  Q_PROPERTY(float radius READ radius CONSTANT)
  Q_PROPERTY(float spacing READ spacing CONSTANT)
  Q_PROPERTY(QColor background READ background CONSTANT)
  Q_PROPERTY(QColor foreground READ foreground CONSTANT)
  Q_PROPERTY(QColor card READ card CONSTANT)
  Q_PROPERTY(QColor cardForeground READ cardForeground CONSTANT)
  Q_PROPERTY(QColor popover READ popover CONSTANT)
  Q_PROPERTY(QColor popoverForeground READ popoverForeground CONSTANT)
  Q_PROPERTY(QColor primary READ primary CONSTANT)
  Q_PROPERTY(QColor primaryForeground READ primaryForeground CONSTANT)
  Q_PROPERTY(QColor secondary READ secondary CONSTANT)
  Q_PROPERTY(QColor secondaryForeground READ secondaryForeground CONSTANT)
  Q_PROPERTY(QColor muted READ muted CONSTANT)
  Q_PROPERTY(QColor mutedForeground READ mutedForeground CONSTANT)
  Q_PROPERTY(QColor accent READ accent CONSTANT)
  Q_PROPERTY(QColor accentForeground READ accentForeground CONSTANT)
  Q_PROPERTY(QColor destructive READ destructive CONSTANT)
  Q_PROPERTY(QColor border READ border CONSTANT)
  Q_PROPERTY(QColor input READ input CONSTANT)
  Q_PROPERTY(QColor ring READ ring CONSTANT)
  Q_PROPERTY(QColor chart1 READ chart1 CONSTANT)
  Q_PROPERTY(QColor chart2 READ chart2 CONSTANT)
  Q_PROPERTY(QColor chart3 READ chart3 CONSTANT)
  Q_PROPERTY(QColor chart4 READ chart4 CONSTANT)
  Q_PROPERTY(QColor chart5 READ chart5 CONSTANT)
  Q_PROPERTY(QColor sidebar READ sidebar CONSTANT)
  Q_PROPERTY(QColor sidebarForeground READ sidebarForeground CONSTANT)
  Q_PROPERTY(QColor sidebarPrimary READ sidebarPrimary CONSTANT)
  Q_PROPERTY(QColor sidebarPrimaryForeground READ sidebarPrimaryForeground CONSTANT)
  Q_PROPERTY(QColor sidebarAccent READ sidebarAccent CONSTANT)
  Q_PROPERTY(QColor sidebarAccentForeground READ sidebarAccentForeground CONSTANT)
  Q_PROPERTY(QColor sidebarBorder READ sidebarBorder CONSTANT)
  Q_PROPERTY(QColor sidebarRing READ sidebarRing CONSTANT)

public:
  float m_radius;
  float m_spacing;
  QColor m_background;
  QColor m_foreground;
  QColor m_card;
  QColor m_cardForeground;
  QColor m_popover;
  QColor m_popoverForeground;
  QColor m_primary;
  QColor m_primaryForeground;
  QColor m_secondary;
  QColor m_secondaryForeground;
  QColor m_muted;
  QColor m_mutedForeground;
  QColor m_accent;
  QColor m_accentForeground;
  QColor m_destructive;
  QColor m_border;
  QColor m_input;
  QColor m_ring;
  QColor m_chart1;
  QColor m_chart2;
  QColor m_chart3;
  QColor m_chart4;
  QColor m_chart5;
  QColor m_sidebar;
  QColor m_sidebarForeground;
  QColor m_sidebarPrimary;
  QColor m_sidebarPrimaryForeground;
  QColor m_sidebarAccent;
  QColor m_sidebarAccentForeground;
  QColor m_sidebarBorder;
  QColor m_sidebarRing;

  explicit Theme(QObject *parent = nullptr);

  float radius() const;
  float spacing() const;
  QColor background() const;
  QColor foreground() const;
  QColor card() const;
  QColor cardForeground() const;
  QColor popover() const;
  QColor popoverForeground() const;
  QColor primary() const;
  QColor primaryForeground() const;
  QColor secondary() const;
  QColor secondaryForeground() const;
  QColor muted() const;
  QColor mutedForeground() const;
  QColor accent() const;
  QColor accentForeground() const;
  QColor destructive() const;
  QColor border() const;
  QColor input() const;
  QColor ring() const;
  QColor chart1() const;
  QColor chart2() const;
  QColor chart3() const;
  QColor chart4() const;
  QColor chart5() const;
  QColor sidebar() const;
  QColor sidebarForeground() const;
  QColor sidebarPrimary() const;
  QColor sidebarPrimaryForeground() const;
  QColor sidebarAccent() const;
  QColor sidebarAccentForeground() const;
  QColor sidebarBorder() const;
  QColor sidebarRing() const;
};

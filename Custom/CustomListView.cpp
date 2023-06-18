#include "customlistview.h"

CustomListView::CustomListView(QWidget* parent)
    : QListView(parent)
{
}

void CustomListView::paintEvent(QPaintEvent* event)
{
    QListView::paintEvent(event);

    QPainter painter(viewport());
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::transparent);
    painter.drawRect(rect().bottomLeft().x(), rect().bottomLeft().y() - 1, rect().width(), 1);
}


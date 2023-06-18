#ifndef CUSTOMLISTVIEW_H
#define CUSTOMLISTVIEW_H

#include <QListView>
#include <QPainter>

class CustomListView : public QListView
{
    Q_OBJECT

public:
    explicit CustomListView(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
};

#endif // CUSTOMLISTVIEW_H

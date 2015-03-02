#ifndef CUSTOMQVIDEOWIDGET_H
#define CUSTOMQVIDEOWIDGET_H

#include <QVideoWidget>
#include <QKeyEvent>

class CustomQVideoWidget : public QVideoWidget
{
public:
    CustomQVideoWidget();
    ~CustomQVideoWidget();
protected:
    bool event(QEvent *event);
};

#endif // CUSTOMQVIDEOWIDGET_H

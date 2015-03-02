#include "customqvideowidget.h"

CustomQVideoWidget::CustomQVideoWidget()
{
}

CustomQVideoWidget::~CustomQVideoWidget()
{
}

bool CustomQVideoWidget::event(QEvent *event)
{
    if(event->type()== QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = (QKeyEvent*)event;
        if (keyEvent->key()==Qt::Key_Escape ){
            setFullScreen(false);
            return true;
        }
    }
    return QVideoWidget::event(event);
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QWidget>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QDir>
#include <QSlider>
#include <QFileDialog>
#include <QToolButton>

#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QDialog>
#include <QLabel>

#include "customqvideowidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    QGridLayout*        lytMain_;
    QWidget*            wgtMain_;
    QMediaPlayer*       mediaPlayer_;
    QSlider*            playerSlider_;
    CustomQVideoWidget* videoWidget_;
    QSlider*            volumeSlider_;
    QToolButton*        btnOpen_;
    QToolButton*        btnPlay_;
    QToolButton*        btnPause_;
    QToolButton*        btnStop_;
    QMenuBar*           mainMenu_;
    QMenu*              mnuArchivo_;
    QMenu*              mnuAyuda_;
    QMenu*              mnuVer_;
    QAction*            actArchivoAbrir_;
    QAction*            actArchivoRecientes_;
    QAction*            actAyudaAcercaDe_;
    QAction*            actVerPantallaCompleta_;
    QAction*            actVerMetadatos_;

    QDialog*            dialogAcercaDe_;
    QGridLayout*        gridLayoutAcercaDe_;
    QLabel*             label1AcercaDe_;
    QLabel*             label2AcercaDe_;

private slots:
    void onOpen();
    void onSeek();
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);
    void onVolumeChanged(int volume);
    void alAcercaDe();
    void alPantallaCompleta();

};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <story.h>
#include <QMediaPlayer>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_start_clicked();

private:
    Ui::MainWindow *ui;
    story *storyLine;
    QMediaPlayer *music;
    QAudioOutput *audioplayer;
};
#endif // MAINWINDOW_H

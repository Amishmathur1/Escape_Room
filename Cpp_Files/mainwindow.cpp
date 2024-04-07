#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "story.h"
#include <QDebug>
#include <QMediaPlayer>
#include <QAudioOutput>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize QMediaPlayer and QAudioOutput as member variables
    music = new QMediaPlayer(this);
    audioplayer = new QAudioOutput(this);

    // Set up audio output for QMediaPlayer
    music->setAudioOutput(audioplayer);

    // Load audio file
    QUrl audioUrl = QUrl::fromLocalFile("C:/Users/mathu/OneDrive/Documents/System_Programming/audio/Navin.song.mp3"); // Assuming song1.mp3 is added as a resource
    if (audioUrl.isValid()) {
        music->setSource(audioUrl);
        audioplayer->setVolume(50);

        // Start playing background music
        music->play();
    } else {
        qDebug() << "Failed to load audio file";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{
    hide();
    storyLine = new story(this);
    storyLine->show();
}



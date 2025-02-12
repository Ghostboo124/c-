#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_spotifyButton_clicked();

    void on_vscodeButton_clicked();

    void on_vsButton_clicked();

    void on_discordButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

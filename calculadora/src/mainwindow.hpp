#pragma once
#include <QMainWindow>
#include "./gui/ui_mainwindow.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    Ui::Calculadora ui;
};
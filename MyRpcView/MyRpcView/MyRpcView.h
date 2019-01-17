#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyRpcView.h"

class MyRpcView : public QMainWindow
{
	Q_OBJECT

public:
	MyRpcView(QWidget *parent = Q_NULLPTR);

private:
	Ui::MyRpcViewClass ui;
};

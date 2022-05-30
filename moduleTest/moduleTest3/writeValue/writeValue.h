#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_writeValue.h"

#include "PCI_7248_Card.h"

class writeValue : public QMainWindow
{
    Q_OBJECT

public:
    writeValue(QWidget *parent = Q_NULLPTR);

public slots:

	// SN1
	void on_11();
	void off_11();
	void on_12();
	void off_12();

	// SN2
	void on_21();
	void off_21();
	void on_22();
	void off_22();
	void on_23();
	void off_23();

	// PHY
	void on_31();
	void off_31();
	void on_32();
	void off_32();

private:
    Ui::writeValueClass ui;
};

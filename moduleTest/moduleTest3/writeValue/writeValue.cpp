#include "writeValue.h"

writeValue::writeValue(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	new PCI_7248_Card();
}

void writeValue::on_11()
{
	PCI_7248_Card::writeCard(1, 1, 1);
}

void writeValue::off_11()
{
	PCI_7248_Card::writeCard(1, 1, 0);
}

void writeValue::on_12()
{
}

void writeValue::off_12()
{
}

void writeValue::on_21()
{
}

void writeValue::off_21()
{
}

void writeValue::on_22()
{
}

void writeValue::off_22()
{
}

void writeValue::on_23()
{
}

void writeValue::off_23()
{
}

void writeValue::on_31()
{
}

void writeValue::off_31()
{
}

void writeValue::on_32()
{
}

void writeValue::off_32()
{
}

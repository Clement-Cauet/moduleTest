#include "writeValue.h"

writeValue::writeValue(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	new PCI_7248_Card();
}

void writeValue::on_11()
{
	PCI_7248_Card::writeCard(Channel_P2A, 0, 0);
}

void writeValue::off_11()
{
	PCI_7248_Card::writeCard(Channel_P2A, 0, 1);
}

void writeValue::on_12()
{
	PCI_7248_Card::writeCard(Channel_P2A, 1, 0);
}

void writeValue::off_12()
{
	PCI_7248_Card::writeCard(Channel_P2A, 1, 1);
}

void writeValue::on_21()
{
	PCI_7248_Card::writeCard(Channel_P2B, 0, 0);
}

void writeValue::off_21()
{
	PCI_7248_Card::writeCard(Channel_P2B, 0, 1);
}

void writeValue::on_22()
{
	PCI_7248_Card::writeCard(Channel_P2B, 1, 0);
}

void writeValue::off_22()
{
	PCI_7248_Card::writeCard(Channel_P2B, 1, 1);
}

void writeValue::on_23()
{
	PCI_7248_Card::writeCard(Channel_P2B, 2, 0);
}

void writeValue::off_23()
{
	PCI_7248_Card::writeCard(Channel_P2B, 2, 1);
}

void writeValue::on_31()
{
	PCI_7248_Card::writeCard(Channel_P2C, 0, 0);
}

void writeValue::off_31()
{
	PCI_7248_Card::writeCard(Channel_P2C, 0, 1);
}

void writeValue::on_32()
{
	PCI_7248_Card::writeCard(Channel_P2C, 2, 0);
}

void writeValue::off_32()
{
	PCI_7248_Card::writeCard(Channel_P2C, 2, 1);
}

void writeValue::on_all()
{
	for (int i = 5; i < 8; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			PCI_7248_Card::writeCard(i, j, 0);
		}
	}
}

void writeValue::off_all()
{
	for (int i = 5; i < 8; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			PCI_7248_Card::writeCard(i, j, 1);
		}
	}
}

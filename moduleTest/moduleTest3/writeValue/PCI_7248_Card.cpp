#include "PCI_7248_Card.h"

U16 PCI_7248_Card::card = -1;

bool PCI_7248_Card::readCard(U16 channel, U16 sensor)
{

	DO_ReadLine(card, channel, sensor, &value);
	return value;

}

void PCI_7248_Card::writeCard(U16 channel, U16 sensor, U16 value)
{

	DO_WriteLine(card, channel, sensor, value);

}

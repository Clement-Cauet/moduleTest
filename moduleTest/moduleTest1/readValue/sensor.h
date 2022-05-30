#pragma once

#include "security.h"

class sensor : public security
{

	bool actualState[3];
	bool lastState[3];

public:

	sensor(PCI_7248_Card * card)
		: security(card)
	{
	}

	virtual void selectStatut();

private:

	int room;
};
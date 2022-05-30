#pragma once

#include "security.h"

class tamper : public security
{

	bool actualState[3];
	bool lastState[3];

public:

	tamper(PCI_7248_Card * card)
		: security(card)
	{
	}

	virtual void selectStatut();

private:

	int room;
};
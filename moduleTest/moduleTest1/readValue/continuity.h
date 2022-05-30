#pragma once

#include "security.h"

class continuity : public security
{

	bool actualState[3];
	bool lastState[3];

public:

	continuity(PCI_7248_Card * card)
		: security(card)
	{
	}

	virtual void selectStatut();

private:

	int room;
};
#include "security.h"
#include "continuity.h"
#include "sensor.h"
#include "tamper.h"
#include "presence.h"


void security::loop(){}

void security::superviseTable()
{
	ConsoleTable ct(BASIC);
	ct.setPadding(1);

	ct.addColumn("");
	ct.addColumn(" SN1 ");
	ct.addColumn(" SN2 ");
	ct.addColumn(" PHY ");

	for (int i = 0; i < 4; i++)
	{
		auto entry = new ConsoleTableRow(4);
		std::string title;
		switch (i)
		{
		case 0:
			title = "Continuity";
			break;
		case 1:
			title = "Sensor";
			break;
		case 2:
			title = "Tamper";
			break;
		case 3:
			title = "Presence";
			break;
		}
		entry->addEntry(title, 0);
		for (int j = 1; j < 3; j++)
		{
			entry->addEntry("    ", j);
		}
		ct.addRow(entry);
	}

	ct.printTable();
}

enum Spells
{
	SPELL_BERSERK	= 26662,
	SPELL_EXPLOSIVE_TAR	= 144492,
	SPELL_FLAME_VENTS	= 144464,
	SPELL_IGNITE_ARMOR	= 144467,
	SPELL_SEISMIC_ACTIVITY	= 144483,
	SPELL_SHOCK_PULSE	=	144485,	
};

enum Events
{
	EVENT_BERSERK = 1
	EVENT_EXPLOSIVE_TAR = 2
	EVENT_FLAME_VENTS = 3
	EVENT_IGNITE_ARMOR = 4
	EVENT_SEISMIC_ACTIVITY = 5
	EVENT_SHOCK_PULSE = 6
};

void EnterCombat(Unit* /*who*/) OVERRIDE
{
						events.ScheduleEvent(EVENT_BERSERK, 10000);
						events.ScheduleEvent(EVENT_EXPLOSIVE_TAR, 20000);
						events.ScheduleEvent(EVENT_FLAME_VENTS, 30000);
						events.ScheduleEvent(EVENT_IGNITE_ARMOR, 40000):
						events.ScheduleEvent(EVENT_SEISMIC_ACTIVITY, 50000);
						events.ScheduleEvent(EVENT_SHOCK_PULSE; 60000);
}

while (uint32 eventId = events.ExecuteEvent())
{
		switch (eventId)
		{
			case EVENT_BERSERK;
			DoCastVictim
			break;
			case EVENT_EXPLOSIVE_TAR;
			DoCastVictim
			break;
			case EVENT_FLAME_VENTS;
			DoCastVictim
			break;
			case EVENT_IGNITE_ARMOR;
			DoCastVictim
			break;
			case EVENT_SEISMIC_ACTIVITY;
			DoCastVictim
			break;
			case EVENT_SHOCK_PULSE;
			DoCastVictim
			break;
			default:
				break;
		}
}


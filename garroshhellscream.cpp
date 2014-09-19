/* ScriptData
SDName: Boss_Garrosh_Hellscream
SD%Complete: 75
SDComment: far too op because of summon sha problem, he will continue to heal him self
(Yshaarj's Protection) and timing errors that can  be fixed. He might not summon fading breath but
it can be fixed. Upgraded spells with same name can be fixed. Spell Target can be fixed.
Could kill himself can be fixed easily. Order of spell casts are wrong can be fixed but takes a while
to research on the battle.
SDCategory: Siege Of Orgrimmar
EndScriptData */

#include 

enum Spells
{
	SPELL_ANNIHILATE	= 144969,	
	SPELL_DESECRATE = 144748,
	SPELL_EMPOWERED_DESECRATE	= 144749,
	SPELL_EMPOWERED_DESECRATE	= 145829,
	SPELL_EMPOWERED_GRIPPING_DESPAIR	= 145831,
	SPELL_EMPOWERED_GRIPPING_DESPAIR	= 145195,
	SPELL_EMPOWERED_TOUCH_OF_YSHAARJ	= 145831,
	SPELL_EMPOWERED_TOUCH_OF_YSHAARJ	= 145171,
	SPELL_EMPOWERED_WHIRLING_CORRUPTION	= 145037,
	SPELL_EMPOWERED_WHIRLING_CORRUPTION	= 145833,
	SPELL_GRIPPING_DESPAIR = 145183,
	SPELL_HELLSCREAMS_WARSONG	= 144821,
	SPELL_REALM_OF_YSHAARJ	= 144954,
	EVENT_SUMMON_FADING_BREATH = 147296,
	SPELL_TOUCH_OF_YSHAARJ = 145071,	
	SPELL_TOUCH_OF_YSHAARJ = 145065,	
	SPELL_WEAK_MINDED	= 145331,
	SPELL_WHIRLING_CORRUPTION = 144985,	
	SPELL_YSHAARJS_PROTECTION = 144945,
};

enum Events
{
	EVENT_ANNIHILATE	= 1,	
	EVENT_DESECRATE = 2,
	EVENT_EMPOWERED_DESECRATE	= 3,
	EVENT_EMPOWERED_DESECRATE	= 4,
	EVENT_EMPOWERED_GRIPPING_DESPAIR	= 5,
	EVENT_EMPOWERED_GRIPPING_DESPAIR	= 6,
	EVENT_EMPOWERED_TOUCH_OF_YSHAARJ	= 7,
	EVENT_EMPOWERED_TOUCH_OF_YSHAARJ	= 8,
	EVENT_EMPOWERED_WHIRLING_CORRUPTION	= 9,
	EVENT_EMPOWERED_WHIRLING_CORRUPTION	= 10,
	EVENT_GRIPPING_DESPAIR = 11,
	EVENT_HELLSCREAMS_WARSONG	= 12,
	EVENT_REALM_OF_YSHAARJ	= 13,
	EVENT_SUMMON_FADING_BREATH	= 14,	
	EVENT_TOUCH_OF_YSHAARJ = 15,	
	EVENT_TOUCH_OF_YSHAARJ = 16,	
	EVENT_WEAK_MINDED	= 17,
	EVENT_WHIRLING_CORRUPTION = 18,	
	EVENT_YSHAARJS_PROTECTION = 19,
};
	
void EnterCombat(Unit* /*who*/) OVERRIDE
{
						events.ScheduleEvent(EVENT_ANNIHILATE, 60000);
						events.ScheduleEvent(EVENT_DESECRATE, 120000)
						events.ScheduleEvent(EVENT_EMPOWERED_DESECRATE, 160000)
						events.ScheduleEvent(EVENT_EMPOWERED_DESECRATE, 210000)
						events.ScheduleEvent(EVENT_EMPOWERED_GRIPPING_DESPAIR, 300000)
						events.ScheduleEvent(EVENT_EMPOWERED_GRIPPING_DESPAIR, 350000)
						events.ScheduleEvent(EVENT_EMPOWERED_WHIRLING_CORRUPTION, 450000)
						events.ScheduleEvent(EVENT_EMPOWERED_WHIRLING_CORRUPTION, 500000)
						events.ScheduleEvent(EVENT_GRIPPING_DESPAIR, 600000)
						events.ScheduleEvent(EVENT_HELLSCREAMS_WARSONG, 700000)
						events.ScheduleEvent(EVENT_REALM_OF_YSHAARJ, 750000)
						events.ScheduleEvent(EVENT_SUMMON_FADING_BREATH, 800000)
						events.ScheduleEvent(EVENT_TOUCH_OF_YSHAARJ, 900000)
						events.ScheduleEvent(EVENT_TOUCH_OF_YSHAARJ, 950000)
						events.ScheduleEvent(EVENT_WEAK_MINDED, 1020000)
						events.ScheduleEvent(EVENT_WHIRLING_CORRUPTION, 1120000)
						events.ScheduleEvent(EVENT_YSHAARJS_PROTECTION, 1500000)
}

while (uint32 eventId = events.ExecuteEvent())
{
	switch (eventId)
	{
		case EVENT_ANNIHILATE:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EVENT_ANNIHILATE);
			events.ScheduleEvent(EVENT_ANNIHILATE, 60000);
			break;
		case EVENT_DESECRATE:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EVENT_DESECRATE);
			events.ScheduleEvent(EVENT_DESECRATE, 120000);
			break;
		case EVENT_EMPOWERED_DESECRATE:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EMPOWERED_DESECRATE);
			events.ScheduleEvent(EVENT_DESECRATE, 160000);
			break;
		case EVENT_EMPOWERED_DESECRATE:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EMPOWERED_DESECRATE);
			events.ScheduleEvent(EVENT_EMPOWERED_DESECRATE, 210000);
			break;
		case EVENT_EMPOWERED_GRIPPING_DESPAIR:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EMPOWERED_GRIPPING_DESPAIR);
			events.ScheduleEvent(EVENT_EMPOWERED_GRIPPING_DESPAIR, 300000);
			break;
		case EVENT_EMPOWERED_GRIPPING_DESPAIR:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EMPOWERED_GRIPPING_DESPAIR);
			events.ScheduleEvent(EVENT_EMPOWERED_GRIPPING_DESPAIR, 350000);
			break;
		case EVENT_EMPOWERED_WHIRLING_CORRUPTION:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EMPOWERED_WHIRLING_CORRUPTION);
			events.ScheduleEvent(EVENT_EMPOWERED_WHIRLING_CORRUPTION, 450000);
			break;
		case EVENT_EMPOWERED_WHIRLING_CORRUPTION:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_EMPOWERED_WHIRLING_CORRUPTION);
			events.ScheduleEvent(EVENT_EMPOWERED_WHIRLING_CORRUPTION, 500000);
			break;
		case EVENT_GRIPPING_DESPAIR:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_GRIPPING_DESPAIR);
			events.ScheduleEvent(EVENT_GRIPPING_DESPAIR, 600000);
			break;
		case EVENT_HELLSCREAMS_WARSONG:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_HELLSCREAMS_WARSONG);
			events.ScheduleEvent(EVENT_HELLSCREAMS_WARSONG, 700000);
			break;
		case EVENT_REALM_OF_YSHAARJ:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_REALM_OF_YSHAARJ);
			events.ScheduleEvent(EVENT_REALM_OF_YSHAARJ, 750000);
			break;
		case EVENT_SUMMON_FADING_BREATH:
			DoCast(me, SPELL_SUMMON_FADING_BREATH);
			events.ScheduleEvent(EVENT_SUMMON_FADING_BREATH, 800000);
			break;
		case EVENT_TOUCH_OF_YSHAARJ:
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_TOUCH_OF_YSHAARJ);
			events.ScheduleEvent(EVENT_TOUCH_OF_YSHAARJ, 900000);
			break;
		case EVENT_TOUCH_OF_YSHAARJ;
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_TOUCH_OF_YSHAARJ);
			events.ScheduleEvent(EVENT_TOUCH_OF_YSHAARJ, 950000);
			break;
		case EVENT_WEAK_MINDED;
			if (Unit *target = SelectTarget(SELECT_TARGET_RANDOM, 0))
			DoCastVictim(SPELL_WEAK_MINDED);
			events.ScheduleEvent(EVENT_WEAK_MINDED, 1020000);
			break;
		case EVENT_WHIRLING_CORRUPTION:
			DoCast(me, SPELL_WHIRLING_CORRUPTION);
			events.ScheduleEvent(EVENT_WHIRLING_CORRUPTION, 100000);
			break;
		case EVENT_YSHAARJS_PROTECTION:
		DoCast(me, SPELL_YSHAARJS_PROTECTION);
			events.ScheduleEvent(EVENT_YSHAARJS_PROTECTION, 1500000);
			break;

		default:
			break;
	}
}
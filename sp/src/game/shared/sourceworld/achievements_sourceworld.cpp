#include "cbase.h"


#ifdef GAME_DLL
#ifdef SOURCEWORLD

#include "baseachievement.h"
#include "achievement_def_sourceworld.h"

#define DECLARE_SW_ACHIEVEMENT( className, achievementID, hidden ) \
	DECLARE_ACHIEVEMENT_( className, achievementID, #achievementID, NULL, 10, hidden )

#define DECLARE_SW_MAP_EVENT_ACHIEVEMENT( achievementID, achievementName )	\
	DECLARE_MAP_EVENT_ACHIEVEMENT_( achievementID, achievementName, NULL, 5, false )

#define DECLARE_SW_MAP_EVENT_ACHIEVEMENT_HIDDEN( achievementID, achievementName )	\
	DECLARE_MAP_EVENT_ACHIEVEMENT_( achievementID, achievementName, NULL, 5, true )

// shorter version
#define ACH_MAP_EVENT( achievementName, hidden ) \
	DECLARE_MAP_EVENT_ACHIEVEMENT_( achievementName, "ACHIEVEMENT_EVENT_" #achievementName, NULL, 5, hidden )

#define ACH_MAP_EVENT_WITH_CLASS(classname, achievementName, hidden) \
	DECLARE_ACHIEVEMENT_( classname, achievementName, "ACHIEVEMENT_EVENT_" #achievementName, NULL, 5, hidden )

class CAchievement1strun : public CBaseAchievement
{
protected:
	void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL | ACH_LISTEN_STAT_EVENTS);
		SetGoal(1);
		//always remmber that achievements need to have this set if we update the number inside of steam
		SetStoreProgressInSteam(true);
		SetStat("SW_RUN_COUNT");
	}

};
DECLARE_SW_ACHIEVEMENT(CAchievement1strun, SW_1ST_RUN, false);

class CAchievement5thrun : public CBaseAchievement
{
protected:
	void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL | ACH_LISTEN_STAT_EVENTS);
		SetGoal(5);
		//always remmber that achievements need to have this set if we update the number inside of steam
		SetStoreProgressInSteam(true);
		SetStat("SW_RUN_COUNT");
	}

};
DECLARE_SW_ACHIEVEMENT(CAchievement5thrun, SW_5TH_RUN, false);

class CAchievement10thrun : public CBaseAchievement
{
protected:
	void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL | ACH_LISTEN_STAT_EVENTS);
		SetGoal(10);
		//always remmber that achievements need to have this set if we update the number inside of steam
		SetStoreProgressInSteam(true);
		SetStat("SW_RUN_COUNT");
	}

};
DECLARE_SW_ACHIEVEMENT(CAchievement10thrun, SW_10TH_RUN, false);

class CAchievement20thrun : public CBaseAchievement
{
protected:
	void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL | ACH_LISTEN_STAT_EVENTS);
		SetGoal(20);
		//always remmber that achievements need to have this set if we update the number inside of steam
		SetStoreProgressInSteam(true);
		SetStat("SW_RUN_COUNT");
	}

};
DECLARE_SW_ACHIEVEMENT(CAchievement20thrun, SW_20TH_RUN, false);

class CAchievement50thrun : public CBaseAchievement
{
protected:
	void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL | ACH_LISTEN_STAT_EVENTS);
		SetGoal(50);
		//always remmber that achievements need to have this set if we update the number inside of steam
		SetStoreProgressInSteam(true);
		SetStat("SW_RUN_COUNT");
	}

};
DECLARE_SW_ACHIEVEMENT(CAchievement50thrun, SW_50TH_RUN, false);

class CAchievement100thrun : public CBaseAchievement
{
protected:
	void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL | ACH_LISTEN_STAT_EVENTS);
		SetGoal(100);
		//always remmber that achievements need to have this set if we update the number inside of steam
		SetStoreProgressInSteam(true);
		SetStat("SW_RUN_COUNT");
	}

};
DECLARE_SW_ACHIEVEMENT(CAchievement100thrun, SW_1ST_RUN, false);

#endif // SOURCEWORLD
#endif // GAME_DLL

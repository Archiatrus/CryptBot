#include <iostream>

#include "Cryptbot.h"
#include "sc2api/sc2_api.h"


CryptBot::CryptBot()
{

}


void CryptBot::OnGameStart()
{

}

void CryptBot::OnStep() {
	Observation();
	// What your bot does every game step
}

void CryptBot::OnUnitDestroyed(const sc2::Unit *unit)
{

}
void CryptBot::OnUnitEnterVision(const sc2::Unit *unit)
{

}

void CryptBot::OnBuildingConstructionComplete(const sc2::Unit* unit)
{

}

void CryptBot::OnUnitCreated(const sc2::Unit *unit)
{

}

void CryptBot::OnUnitIdle(const sc2::Unit *unit)
{
	
}


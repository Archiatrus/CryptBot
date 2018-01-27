#pragma once

#include "sc2api/sc2_interfaces.h"
#include "sc2api/sc2_agent.h"
#include "sc2api/sc2_map_info.h"
#include "sc2lib/sc2_lib.h"




class CryptBot : public sc2::Agent
{
public:
	CryptBot();
	virtual void OnGameStart() override;
	virtual void OnStep() override;
    virtual void OnUnitIdle(const sc2::Unit *unit) override;
	virtual void OnUnitDestroyed(const sc2::Unit *unit) override;
    virtual void OnUnitCreated(const sc2::Unit *unit) override;
    virtual void OnUnitEnterVision(const sc2::Unit *unit) override;
	virtual void OnBuildingConstructionComplete(const sc2::Unit *unit) override;
};


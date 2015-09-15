#pragma once

#include <BWAPI.h>
#include "GameCommander.h"
#include <iostream>
#include <fstream>
#include "Logger.h"
#include "MapTools.h"
#include "HardCodedInfo.h"
#include "UnitCommandManager.h"
#include "Options.h"

#include "rapidjson\document.h"

namespace UAlbertaBot
{

class UAlbertaBotModule : public BWAPI::AIModule
{
	GameCommander gameCommander;

public:

	void	onStart();
	void	onFrame();
	void	onEnd(bool isWinner);
	void	onUnitDestroy(BWAPI::UnitInterface* unit);
	void	onUnitMorph(BWAPI::UnitInterface* unit);
	void	onSendText(std::string text);
	void	onUnitCreate(BWAPI::UnitInterface* unit);
	void	onUnitComplete(BWAPI::UnitInterface* unit);
	void	onUnitShow(BWAPI::UnitInterface* unit);
	void	onUnitHide(BWAPI::UnitInterface* unit);
	void	onUnitRenegade(BWAPI::UnitInterface* unit);

    void    parseConfigFile(const std::string & filename);
    BWAPI::Race getRace(const std::string & raceName);
};

}
///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/GameModeInformation.h>

namespace fb {
	class GameModeConfiguration : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameModeConfiguration"); }
		virtual ~GameModeConfiguration() override {}
		GameModeConfiguration() {
		};

		Array<GameModeInformation> m_information; // 0x18 (24)
	}; // 0x20 (32)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameModeInformation.h>
#include <fb/SystemSettings.h>

namespace fb {
	class GameModeSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameModeSettings"); }
		virtual ~GameModeSettings() override {}
		GameModeSettings() {
			m_rushInstantCaptureUpToFlag = -1;
		};

		Array<GameModeInformation> m_information; // 0x20 (32)
		s32 m_rushInstantCaptureUpToFlag; // 0x28 (40)
	}; // 0x30 (48)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExecutionModeType.h>
#include <fb/SystemSettings.h>

namespace fb {
	class EntitySettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntitySettings"); }
		virtual ~EntitySettings() override {}
		EntitySettings() {
			m_executionMode = ExecutionModeType::ExecutionMode_Play;
			m_outOfEntityBusNetworkIdThreshold = 100;
			m_editorGameViewEnable = false;
			m_spawnSubLevelsFromLogic = false;
		};

		ExecutionModeType m_executionMode; // 0x20 (32)
		u32 m_outOfEntityBusNetworkIdThreshold; // 0x24 (36)
		bool m_editorGameViewEnable; // 0x28 (40)
		bool m_spawnSubLevelsFromLogic; // 0x29 (41)
	}; // 0x30 (48)
}


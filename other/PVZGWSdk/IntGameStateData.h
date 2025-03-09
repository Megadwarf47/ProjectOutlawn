///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/GameStateData.h>

namespace fb {
	class IntGameStateData : public GameStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IntGameStateData"); }
		virtual ~IntGameStateData() override {}
		IntGameStateData() {
			m_newValue = 0;
		};

		AntRef m_gameStateAsset; // 0x18 (24)
		s32 m_newValue; // 0x2C (44)
	}; // 0x30 (48)
}


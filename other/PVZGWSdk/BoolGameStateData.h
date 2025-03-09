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
	class BoolGameStateData : public GameStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolGameStateData"); }
		virtual ~BoolGameStateData() override {}
		BoolGameStateData() {
			m_newValue = true;
		};

		AntRef m_gameStateAsset; // 0x18 (24)
		bool m_newValue; // 0x2C (44)
	}; // 0x30 (48)
}


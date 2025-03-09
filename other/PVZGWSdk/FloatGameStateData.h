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
	class FloatGameStateData : public GameStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatGameStateData"); }
		virtual ~FloatGameStateData() override {}
		FloatGameStateData() {
			m_newValue = 0.f;
		};

		AntRef m_gameStateAsset; // 0x18 (24)
		float m_newValue; // 0x2C (44)
	}; // 0x30 (48)
}


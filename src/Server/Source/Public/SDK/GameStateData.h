///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class GameStateData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameStateData"); }
		virtual ~GameStateData() override {}
		GameStateData() {
		};

		String m_gameStateName; // 0x10 (16)
	}; // 0x18 (24)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/PlayerViewDefinition.h>
#include <fb/String.h>

namespace fb {
	class GameModeViewDefinition : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameModeViewDefinition"); }
		virtual ~GameModeViewDefinition() override {}
		GameModeViewDefinition() {
		};

		String m_gameModeName; // 0x18 (24)
		Array<PlayerViewDefinition> m_viewDefinitions; // 0x20 (32)
	}; // 0x28 (40)
}


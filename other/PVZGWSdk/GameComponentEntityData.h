///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ComponentEntityData.h>

namespace fb {
	class GameComponentEntityData : public ComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameComponentEntityData"); }
		virtual ~GameComponentEntityData() override {}
		GameComponentEntityData() {
			m_enabled = true;
		};

		bool m_enabled; // 0x70 (112)
	}; // 0x80 (128)
}


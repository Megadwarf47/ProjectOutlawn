///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ActionSuppressor.h>
#include <fb/Array.h>
#include <fb/GameComponentData.h>

namespace fb {
	class StanceFilterComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StanceFilterComponentData"); }
		virtual ~StanceFilterComponentData() override {}
		StanceFilterComponentData() {
			m_stanceChangeTime = 0.5f;
			m_undoParentStanceFilter = false;
			m_filterSpecificActions = false;
		};

		Array<s32> m_validStances; // 0x70 (112)
		float m_stanceChangeTime; // 0x78 (120)
		Array<ActionSuppressor> m_actionsToFilter; // 0x80 (128)
		bool m_undoParentStanceFilter; // 0x88 (136)
		bool m_filterSpecificActions; // 0x89 (137)
	}; // 0x90 (144)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIComponentData.h>

namespace fb {
	class UISquadCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISquadCompData"); }
		virtual ~UISquadCompData() override {}
		UISquadCompData() {
			m_hideLocalSquadBoostData = false;
		};

		Array<String> m_squadNames; // 0x30 (48)
		bool m_hideLocalSquadBoostData; // 0x38 (56)
	}; // 0x40 (64)
}


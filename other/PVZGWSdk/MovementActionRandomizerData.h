///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MovementActionData.h>
#include <fb/RefArray.h>

namespace fb {
	class MovementActionData;
}

namespace fb {
	class MovementActionRandomizerData : public MovementActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovementActionRandomizerData"); }
		virtual ~MovementActionRandomizerData() override {}
		MovementActionRandomizerData() {
			m_reinsertIntoRandomizedListAfterUse = true;
		};

		RefArray<MovementActionData> m_actions; // 0x10 (16)
		bool m_reinsertIntoRandomizedListAfterUse; // 0x18 (24)
	}; // 0x20 (32)
}


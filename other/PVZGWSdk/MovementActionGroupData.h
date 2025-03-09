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
	class MovementActionGroupData : public MovementActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovementActionGroupData"); }
		virtual ~MovementActionGroupData() override {}
		MovementActionGroupData() {
			m_runSimultaneously = false;
			m_restartChildren = false;
		};

		RefArray<MovementActionData> m_actions; // 0x10 (16)
		bool m_runSimultaneously; // 0x18 (24)
		bool m_restartChildren; // 0x19 (25)
	}; // 0x20 (32)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricState.h>

namespace fb {
	class PlayerState : public MetricState {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerState"); }
		virtual ~PlayerState() override {}
		PlayerState() {
			m_onlineId = 0;
		};

		u64 m_onlineId; // 0x20 (32)
	}; // 0x28 (40)
}


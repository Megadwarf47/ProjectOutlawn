///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricState.h>

namespace fb {
	class ClientJuiceState : public MetricState {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClientJuiceState"); }
		virtual ~ClientJuiceState() override {}
		ClientJuiceState() {
			m_sessionId = 0;
		};

		s32 m_sessionId; // 0x20 (32)
	}; // 0x28 (40)
}


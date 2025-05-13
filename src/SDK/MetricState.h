///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class MetricState : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MetricState"); }
		virtual ~MetricState() override {}
		MetricState() {
			m_isSet = false;
		};

		bool m_isSet; // 0x18 (24)
	}; // 0x20 (32)
}


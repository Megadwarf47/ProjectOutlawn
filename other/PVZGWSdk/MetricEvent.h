///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class MetricEvent : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MetricEvent"); }
		virtual ~MetricEvent() override {}
		MetricEvent() {
			m_owner = 0;
		};

		u64 m_owner; // 0x10 (16)
	}; // 0x18 (24)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class MetricAggregate : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MetricAggregate"); }
		virtual ~MetricAggregate() override {}
		MetricAggregate() {
		};

	}; // 0x18 (24)
}


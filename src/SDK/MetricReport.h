///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class MetricEvent;
}

namespace fb {
	class MetricReport : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MetricReport"); }
		virtual ~MetricReport() override {}
		MetricReport() {
		};

		RefArray<MetricEvent> m_events; // 0x10 (16)
	}; // 0x18 (24)
}


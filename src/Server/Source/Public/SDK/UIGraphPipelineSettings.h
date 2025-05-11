///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class UIGraphPipelineSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGraphPipelineSettings"); }
		virtual ~UIGraphPipelineSettings() override {}
		UIGraphPipelineSettings() {
			m_oneBundlePerGraph = false;
		};

		bool m_oneBundlePerGraph; // 0x10 (16)
	}; // 0x18 (24)
}


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
	class SubWorldInclusionSetting;
}

namespace fb {
	class SubWorldInclusionSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubWorldInclusionSettings"); }
		virtual ~SubWorldInclusionSettings() override {}
		SubWorldInclusionSettings() {
		};

		RefArray<SubWorldInclusionSetting> m_settings; // 0x10 (16)
	}; // 0x18 (24)
}


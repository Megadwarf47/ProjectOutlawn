///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class SubWorldInclusionCriterion;
}

namespace fb {
	class SubWorldInclusionSetting : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubWorldInclusionSetting"); }
		virtual ~SubWorldInclusionSetting() override {}
		SubWorldInclusionSetting() {
		};

		CtrRef<SubWorldInclusionCriterion> m_criterion; // 0x10 (16)
		Array<String> m_enabledOptions; // 0x18 (24)
	}; // 0x20 (32)
}


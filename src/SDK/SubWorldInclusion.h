///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class SubWorldInclusionCriterion;
}

namespace fb {
	class SubWorldInclusion : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubWorldInclusion"); }
		virtual ~SubWorldInclusion() override {}
		SubWorldInclusion() {
		};

		RefArray<SubWorldInclusionCriterion> m_criteria; // 0x18 (24)
	}; // 0x20 (32)
}


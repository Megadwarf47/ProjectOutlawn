///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>

namespace fb {
	class CriteriaGateList : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CriteriaGateList"); }
		virtual ~CriteriaGateList() override {}
		CriteriaGateList() {
		};

		Array<float> m_criteriaGates; // 0x18 (24)
	}; // 0x20 (32)
}


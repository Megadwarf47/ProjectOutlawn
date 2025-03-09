///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class SubWorldInclusionCriterion : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubWorldInclusionCriterion"); }
		virtual ~SubWorldInclusionCriterion() override {}
		SubWorldInclusionCriterion() {
		};

		String m_name; // 0x10 (16)
		Array<String> m_options; // 0x18 (24)
	}; // 0x20 (32)
}


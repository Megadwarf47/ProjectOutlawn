///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AwardStarNameInstance.h>
#include <fb/DataContainer.h>

namespace fb {
	class AwardStarNameData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardStarNameData"); }
		virtual ~AwardStarNameData() override {}
		AwardStarNameData() {
		};

		Array<AwardStarNameInstance> m_nameInstances; // 0x10 (16)
	}; // 0x18 (24)
}


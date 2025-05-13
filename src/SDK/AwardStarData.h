///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwardData.h>
#include <fb/CtrRef.h>

namespace fb {
	class AwardStarNameData;
}

namespace fb {
	class AwardStarData : public AwardData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardStarData"); }
		virtual ~AwardStarData() override {}
		AwardStarData() {
		};

		CtrRef<AwardStarNameData> m_starTemplate; // 0xB8 (184)
	}; // 0xC0 (192)
}


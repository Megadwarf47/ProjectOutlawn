///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwardableTreeBase.h>
#include <fb/CategorizedAwardData.h>
#include <fb/RefArray.h>

namespace fb {
	class AwardData;
}

namespace fb {
	class AwardDataTree : public AwardableTreeBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardDataTree"); }
		virtual ~AwardDataTree() override {}
		AwardDataTree() {
		};

		RefArray<AwardData> m_filteredAwards; // 0x30 (48)
		CategorizedAwardData m_categorizedAwards; // 0x38 (56)
	}; // 0x58 (88)
}


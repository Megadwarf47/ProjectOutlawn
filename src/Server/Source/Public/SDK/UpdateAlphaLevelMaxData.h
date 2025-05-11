///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateAlphaLevelMaxData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateAlphaLevelMaxData"); }
		virtual ~UpdateAlphaLevelMaxData() override {}
		UpdateAlphaLevelMaxData() {
			m_maxLevel = 1.f;
		};

		float m_maxLevel; // 0x28 (40)
	}; // 0x30 (48)
}


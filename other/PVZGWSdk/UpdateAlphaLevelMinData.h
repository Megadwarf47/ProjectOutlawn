///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateAlphaLevelMinData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateAlphaLevelMinData"); }
		virtual ~UpdateAlphaLevelMinData() override {}
		UpdateAlphaLevelMinData() {
			m_minLevel = 0.f;
		};

		float m_minLevel; // 0x28 (40)
	}; // 0x30 (48)
}


///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class IndoorAreaTriggerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IndoorAreaTriggerEntityData"); }
		virtual ~IndoorAreaTriggerEntityData() override {}
		IndoorAreaTriggerEntityData() {
			m_enabled = true;
		};

		bool m_enabled; // 0x60 (96)
	}; // 0x70 (112)
}


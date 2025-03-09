///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class DirectionHintEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DirectionHintEntityData"); }
		virtual ~DirectionHintEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		DirectionHintEntityData() {
			m_isTargetPosition = false;
		};

		bool m_isTargetPosition; // 0x60 (96)
	}; // 0x70 (112)
}


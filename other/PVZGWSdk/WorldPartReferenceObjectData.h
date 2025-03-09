///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ReferenceObjectData.h>

namespace fb {
	class WorldPartReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldPartReferenceObjectData"); }
		virtual ~WorldPartReferenceObjectData() override {}
		WorldPartReferenceObjectData() {
			m_castSunShadowEnable = false;
		};

	}; // 0x80 (128)
}


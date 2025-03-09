///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalWindForceEntityBaseData.h>

namespace fb {
	class LocalWindForceSphereEntityData : public LocalWindForceEntityBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceSphereEntityData"); }
		virtual ~LocalWindForceSphereEntityData() override {}
		LocalWindForceSphereEntityData() {
			m_radius = 5.f;
		};

		float m_radius; // 0x80 (128)
	}; // 0x90 (144)
}


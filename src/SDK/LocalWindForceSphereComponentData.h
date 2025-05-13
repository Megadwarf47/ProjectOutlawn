///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalWindForceComponentBaseData.h>

namespace fb {
	class LocalWindForceSphereComponentData : public LocalWindForceComponentBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceSphereComponentData"); }
		virtual ~LocalWindForceSphereComponentData() override {}
		LocalWindForceSphereComponentData() {
			m_radius = 5.f;
		};

		float m_radius; // 0x90 (144)
	}; // 0xA0 (160)
}


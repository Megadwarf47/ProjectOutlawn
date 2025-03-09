///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SimpleDofParamConverterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleDofParamConverterEntityData"); }
		virtual ~SimpleDofParamConverterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SimpleDofParamConverterEntityData() {
			m_focusDistance = 5.f;
			m_blurFilterDeviation = 3.f;
			m_nearDistanceScale = 0.3f;
			m_farDistanceScale = 2.5f;
			m_scale = 1.f;
		};

		float m_focusDistance; // 0x18 (24)
		float m_blurFilterDeviation; // 0x1C (28)
		float m_nearDistanceScale; // 0x20 (32)
		float m_farDistanceScale; // 0x24 (36)
		float m_scale; // 0x28 (40)
	}; // 0x30 (48)
}

